#include "Includes.h"

//sugerencia 1 que se pueda usar el simbolo + al principio de los numeros , implementado
//sugerencia 2 guardar el resultado para usarlo depues
//sugerencia 3 que no sea necesario pedir ayua y te la den desde un pricipio

struct Token {
	char kind;
	int value;
	string name;
	Token(char ch) 
		:kind(ch), value(0) { } //constructores de tokens
	Token(char ch, int val) 
		:kind(ch), value(val) { }
	Token(char ch, string nam)
		:kind(ch), name(nam) { }
};


class Token_stream {
	bool full;
	Token buffer;
public:
	Token_stream() :full(0), buffer(0) { }

	Token get();
	void unget(Token t) { buffer = t; full = true; }

	void ignore(char);
};

const char let = 'L';
const char quit = 'q';
const char print = ';';
const char number = '8';
const char name = 'a';
int x = 10;

Token Token_stream::get()
{
	
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch; //ingresando operacion
	if (isspace(ch))
	{
		return Token(print);
	}
	switch (ch) {
	case '{':
	case '}':
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
	case 's':
	case 'p':
		return Token(ch);
	case '.':
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	{	
		cin.unget();
		double val;
		cin >> val;
		return Token(number, val); //llamar a la funcion para llenar el token
	}
	case 'x':
	{	
		double val;
		val = x;
		return Token(number, val); //llamar a la funcion para llenar el token
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s += ch;
			cin.unget();
			if (s == "L")
			{
				return Token(let);
			}
			if (s == "q")
			{
				return Token(quit);
			}
			if (s == "h")
			{
				cout << "Ingrese la operacion que quiera hacer" << endl;
				cout << "Pulse ; para dar resultado y q para cerrar el programa" << endl;
				return Token('h');
			}
			if (s == "H")
			{
				cout << "Ingrese la operacion que quiera hacer" << endl;
				cout << "Pulse ; para dar resultado y q para cerrar el programa" << endl;
				return Token('H');
			}
			return Token(name, s);
		}
		error("Bad token");
	}
}

void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) {
		full = false;
		return;
	}
	full = false;

	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable {
	string name;
	int value;
	Variable(string n, int v) :name(n), value(v) { }
};

vector<Variable> names;

int get_value(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, int d)
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

int is_declared(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

int expression();

int primary() //revisa si la operacion tiene parentecis, llaves o es negstivo un numero
{
	Token t = ts.get();
	switch (t.kind)
	{
		case '{':
		{	
			int d = expression();
			t = ts.get();
			if (t.kind != '}')
			{
				error("'}' expected");
			}
			return d;
		}
		case '(':
		{	
			int d = expression();
			t = ts.get();
			if (t.kind != ')')
			{
				error("')' expected");
			}
			return d;
		}
		case 's':
		{
			int d = expression();
			if (d<0)
			{
				error("Not negative");
			}
			d = sqrt(d);
			return d;
			
		}

		case 'p':
		{
			int d = expression();
			int val1 = 0;

			cout << "Ingrese la potencia: ";
			cin >> val1;

			d = pow(d, val1);

			return d;

		}



		case '-':
			return -primary();
		case '+':
			return primary();

		case number:
			return t.value;

		case name:
			return get_value(t.name);

		default:
			error("primary expected");
	}
}

int term() //operaciones de multiplicacion y division
{
	int left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {

		case '=':
			x = primary();
			break;

		case '*':
			left *= primary();
			break;
		case '/':
		{	
			int d = primary();
			if (d == 0)
			{
				error("divide by zero");
			}
			left /= d;
			break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

int expression() //operacion de suma y resta
{
	int left = term();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '+':
			left += term();
			break;
		case '-':
			left -= term();
			break;
		default:
			ts.unget(t);
			return left;
		}
	}
}

int declaration()
{
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	int d = expression();
	names.push_back(Variable(name, d));
	return d;
}

int statement()
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";
const int k = 1000;
const int pi = 3.14;

void calculate()
{
	while (true) try {
		cout << prompt;
		Token t = ts.get(); 
		while (t.kind == print)
		{
			t = ts.get();
		}
		if (t.kind == quit)
		{
			return;
		}
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}


int main() // iniciamos el programa

try {

	cout << "Bienvenido a nuestra calculadora simple." << endl;
	cout << "Por favor ingrese expresiones usando números de punto flotante " << endl;
	cout << "Cuando quiera terminar pulse 'q', si quiere ver su resultado pulse ';'" << endl;
	cout << "Puedes usar +, -, *, /, (), {} y !" << endl;
	cout << "Para usar raiz cuadrada pulse 's' y para usar exponente pulse p" << endl;
	calculate(); //llamar a la funcion calculate
	return 0;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}
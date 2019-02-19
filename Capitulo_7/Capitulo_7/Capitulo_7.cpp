#include "Includes.h"

struct Token {
	char kind;
	double value;
	string name;
	Token(char ch) 
		:kind(ch), value(0) { } //constructores de tokens
	Token(char ch, double val) 
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
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';

Token Token_stream::get()
{
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch; //ingresando operacion
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
	case 'p':
	{
		int Valor = 0;
		int Pot = 0;
		int Resultado = 0;
		cout << "ingrese su valor: "; cin >> Valor;
		cout << "A que numero quiere elevarlo: "; cin >> Pot;

		Resultado = pow(Valor, Pot);
		cout << "=" << Resultado << endl;
		return Resultado;
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s = ch;
			cin.unget();
			if (s == "let")
			{
				return Token(let);
			}
			if (s == "quit")
			{
				return Token(name);
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
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();

double primary() //revisa si la operacion tiene parentecis, llaves o es negstivo un numero
{
	Token t = ts.get();
	switch (t.kind)
	{
		case '{':
		{	
			double d = expression();
			t = ts.get();
			if (t.kind != '}')
			{
				error("'}' expected");
			}
			return d;
		}
		case '(':
		{	
			double d = expression();
			t = ts.get();
			if (t.kind != ')')
			{
				error("')' expected");
			}
			return d;
		}
		case 's':
		{
			double d = primary();
			if (d = -primary())
			{
				error("'-' negated");;
			}
			return sqrt(d);
			
		}

		case '-':
			return -primary();

		case number:
			return t.value;

		case name:
			return get_value(t.name);

		default:
			error("primary expected");
	}
}

double term() //operaciones de multiplicacion y division
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
			
		case '*':
			left *= primary();
			break;
		case '/':
		{	
			double d = primary();
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

double expression() //operacion de suma y resta
{
	double left = term();
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

double declaration()
{
	Token t = ts.get();
	if (t.kind != 'a') error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement()
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

void calculate()
{
	while (true) try {
		cout << prompt;
		Token t = ts.get(); 
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
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
	cout << "Por favor ingrese expresiones usando n�meros de punto flotante " << endl;
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
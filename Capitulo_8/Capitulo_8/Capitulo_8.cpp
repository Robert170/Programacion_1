#include "Includes.h"

struct Token {
	char kind;
	double value;
	string name;
	Token(char ch) 
		:kind(ch), value(0) { }
	Token(char ch, double val)
		:kind(ch), value(val) { }
	Token(char ch, string name)
		:kind(ch), name(name) { }
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
	cin >> ch;
	switch (ch) {
	case '(':
	case ')':
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case ';':
	case '=':
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
	{	cin.unget();
	double val;
	cin >> val;
	return Token(number, val);
	}
	default:
		if (isalpha(ch)) {
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s = ch;
			cin.unget();
			if (s == "let") return Token(let);
			if (s == "quit") return Token(name);
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

double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '(':
	{	double d = expression();
	t = ts.get();
	if (t.kind != ')') error("'(' expected");
	return d;
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

double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
			left *= primary();
			break;
		case '/':
		{	double d = primary();
		if (d == 0) error("divide by zero");
		left /= d;
		break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()
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

int Calculadora()

try {
	calculate();
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

int Print(int a)
{
	vector<int>Vec;
	Vec.push_back(a);
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << endl;
	}

	return 0;
}

int Fibo()
{
	//se puede hacer hasta el numero 47 de la seri antes de empezar dar numeros locos
	int Val1 = 0;
	int	Val2 = 1;
	int Resultado = 0;
	int Limite;
	vector<int>Fibo;
	cout << "Ingrese cuantos numeros de la serie fibonacci se impriman:" << endl;
	cin >> Limite;
	cout << "-------------" << endl;
	for (int i = 0; i < Limite; i++)
	{
		if (i == 0)
		{
			Val2 = 0;
		}

		if (i == 1)
		{
			Val2 = 1;
		}


		if (i == 2)
		{
			Val1 = 0;
		}
				

		Resultado = Val1 + Val2;
		Val1 = Val2;
		Val2 = Resultado;
		Fibo.push_back(Resultado);
	}
	for (int i = 0; i < Fibo.size(); i++)
	{
		Print(Fibo[i]);
	}

	return 0;
}

void Acomodo()
{
	vector<int>Vec = { 1,3,5,7,9 };
	vector<int>Vec2;
	cout << "Su vector es:" << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		Vec2.push_back(Vec[Vec.size()-i-1]);
	}

	cout << "Su vector invertido es:" << endl;
	for (int i = 0; i < Vec2.size(); i++)
	{
		cout << Vec2[i] << " ";
	}
	cout << endl;
}

void Invertir()
{
	int Temp;
	int Val;
	vector<int>Vec = { 1,3,5,7,9 };
	cout << "-------------" << endl;
	cout << "Su vector es:" << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < Vec.size()/2; i++)
	{
		Temp = Vec[i];
		Val = Vec[Vec.size() - i - 1];
		Vec[Vec.size() - i - 1] = Temp;
		Vec[i] = Val;
	}

	cout << "Su vector invertido es:" << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << " ";
	}
	cout << endl;
}

void Nombre()
{
	vector<string>Vec = {"Juan","Ana","Pepe","Rulo","Estefania" };
	vector<string>Vec2;
	cout << "Su vector es:" << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		Vec2.push_back(Vec[Vec.size() - i - 1]);
	}

	cout << "Su vector invertido es:" << endl;
	for (int i = 0; i < Vec2.size(); i++)
	{
		cout << Vec2[i] << " ";
	}
	cout << endl;
}

void Nombre_In()
{
	string Temp;
	string Val;
	vector<string>Vec = { "Juan","Ana","Pepe","Rulo","Estefania" };
	cout << "-------------" << endl;
	cout << "Su vector es:" << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < Vec.size() / 2; i++)
	{
		Temp = Vec[i];
		Val = Vec[Vec.size() - i - 1];
		Vec[Vec.size() - i - 1] = Temp;
		Vec[i] = Val;
	}

	cout << "Su vector invertido es:" << endl;
	for (int i = 0; i < Vec.size(); i++)
	{
		cout << Vec[i] << " ";
	}
	cout << endl;
}

void Name()
{
	vector<string>name = { "Juan","Ana","Pepe","Rulo","Estefania" };
	vector<string>name2;
	vector<double>age;
	double Edad;
	cout << "Escriba la edad de las personas mencionadas" << endl;
	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << " ";
	}
	
	cout << "Escriba la edad de las personas " << endl;

	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << ":";
		cin >> Edad;
		age.push_back(Edad);
	}

	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << " " << age[i] << endl;
	
	}

	for (int i = 0; i < name.size(); i++)
	{
		name2.push_back(name[i]);
	}

	sort(name.begin(), name.end());
	cout << "------------" << endl;
	for (int i = 0; i < name.size(); i++)
	{
		for (int j = 0; j < name2.size(); j++)
		{
			if (name[i] == name2[j])
			{
				cout << name[i] << " " << age[j] << endl;
				j = 5;
			}
		}

	}
}

void Names()
{
	vector<string>name;
	vector<string>name2;
	vector<double>age;
	double Edad;
	string Persona;
	cout << "Escriba el nombre de las personas, cuando quiera para pulse'!':" << endl;
	for (int i = 0; cin >> Persona;)
	{
		if (Persona == "!")
		{
			break;
		}
		else
		{
			name.push_back(Persona);
		}

	}
	cout << "Escriba la edad de las personas " << endl;

	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << ":";
		cin >> Edad;
		age.push_back(Edad);
	}
	cout << "------------" << endl;
	for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << " " << age[i] << endl;

	}

	for (int i = 0; i < name.size(); i++)
	{
		name2.push_back(name[i]);
	}

	sort(name.begin(), name.end());
	cout << "------------" << endl;
	for (int i = 0; i < name.size(); i++)
	{
		for (int j = 0; j < name2.size(); j++)
		{
			if (name[i] == name2[j])
			{
				cout << name[i] << " " << age[j] << endl;
				j = 5;
			}
		}

	}
}

void Precio()
{
	vector<double>Precio;
	vector<double>Peso;
	double Price;
	double W;
	cout << "Escriba el precio de cada producto, cuando quiera para pulse'0':" << endl;
	for (int i = 0; cin >> Price;)
	{
		if (Price == 0)
		{
			break;
		}
		else
		{
			Precio.push_back(Price);
		}
	}
	cout << "Escriba el peso de cada producto, cuando quiera para pulse'0':" << endl;
	for (int i = 0; cin >> W;)
	{
		if (W == 0)
		{
			break;
		}
		else
		{
			Peso.push_back(W);
		}

	}

	if (Precio.size() != Peso.size())
	{
		cout << "Tiene que haber la misma cantidad de objetos en ambos vectores";
		return;
	}
	else
	{
		for (int i = 0; i < Precio.size(); i++)
		{
			cout << "El precio multiplicado por el peso es: " << Precio[i] * Peso[i] << endl;
		}
	}
}

void maxv()
{
	vector<int>Tamaño;
	double Tam;
	double Grande;
	cout << "Escriba el precio de cada producto, cuando quiera para pulse'00':" << endl;
	for (int i = 0; cin >> Tam;)
	{
		if (Tam == 00)
		{
			break;
		}
		else
		{
			Tamaño.push_back(Tam);
		}
	}

	for (int i = 0; i < Tamaño.size() - 1; i++)
	{
		if (i == 0)
		{
			Grande = Tamaño[i];
		}

		if (Tamaño[i + 1] > Grande)
		{
			Grande = Tamaño[i + 1];
		}
	}
	cout << "El tamaño mas grande ingresado es: " << Grande << endl;
}

void Varios()
{
	vector<int>Tamaño;
	double Tam;
	double Grande;
	double Pequeño;
	double Media=0;
	double Mediana = 0;
	cout << "Escriba el precio de cada producto, cuando quiera para pulse'00':" << endl;
	for (int i = 0; cin >> Tam;)
	{
		if (Tam == 00)
		{
			break;
		}
		else
		{
			Tamaño.push_back(Tam);
		}
	}

	for (int i = 0; i < Tamaño.size() - 1; i++)
	{
		if (i == 0)
		{
			Grande = Tamaño[i];
		}

		if (Tamaño[i + 1] > Grande)
		{
			Grande = Tamaño[i + 1];
		}
	}

	for (int i = 0; i < Tamaño.size() - 1; i++)
	{
		if (i == 0)
		{
			Pequeño = Tamaño[i];
		}

		if (Tamaño[i + 1] < Pequeño)
		{
			Pequeño = Tamaño[i + 1];
		}
	}
	for (int i = 0; i < Tamaño.size(); i++)
	{
		Media = Media + Tamaño[i];
	}
	Media = Media / Tamaño.size();

	if (Tamaño.size() % 2 == 0)
	{
		Mediana = Tamaño[(Tamaño.size() / 2)-1] + Tamaño[(Tamaño.size() / 2)];
		Mediana = Mediana / 2;
	}
	if (Tamaño.size() % 2 != 0)
	{
		Mediana = Tamaño[(Tamaño.size() / 2)];
	}
	

	cout << "El tamaño mas grande ingresado es: " << Grande << endl;
	cout << "El tamaño mas pequeño ingresado es: " << Pequeño << endl;
	cout << "La media de los valores es: " << Media << endl; 
	cout << "La mediana de los valores es: " << Mediana << endl;

}

int main()
{
	int Eleccion;
	cout << "Elige el numero del programa que quieras ver" << endl;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case 1:
		Calculadora();
		break;
	case 2:
		Print(0);
		break;
	case 3:
		Fibo();
		break;
	case 4:
		Acomodo();
		Invertir();
		break;
	case 5:
		Nombre();
		Nombre_In();
		break;
	case 6:
		Name();
		break;
	case 7:
		Names();
		break;
	case 8:
		Precio();
		break;
	case 9:
		maxv();
		break;
	case 10:
		Varios();
		break;
	default:
		break;
	}
	cin.ignore();
	cin.get();
}
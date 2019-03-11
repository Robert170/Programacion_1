#include <iostream>
#include<string>
#include <vector>
#include<fstream>
#include <stdio.h>
#include "Includes.h"

using namespace std;

enum Ro
{
	I=1, II, III, IV, V, VI, VII, VIII, IX, X
};
class Romano
{
public:
	string r;
	void as_int();
	Romano();
	~Romano();

private:

};

void Romano::as_int()
{
	cout << "Ingrese un numero romano del 1 al 10 y te diremos su valor: " << endl;
	cin >> r;
	if (r == "I")
	{
		cout << "Du numero ramano " << r << " es igual a: " << I << endl;
	}
	else if (r == "II")
	{
		cout << "Du numero ramano " << r << " es igual a: " << II << endl;
	}
	else if (r == "III")
	{
		cout << "Du numero ramano " << r << " es igual a: " << III << endl;
	}
	else if (r == "IV")
	{
		cout << "Du numero ramano " << r << " es igual a: " << IV << endl;
	}
	else if (r == "V")
	{
		cout << "Du numero ramano " << r << " es igual a: " << V << endl;
	}
	else if (r == "VI")
	{
		cout << "Du numero ramano " << r << " es igual a: " << VI << endl;
	}
	else if (r == "VII")
	{
		cout << "Du numero ramano " << r << " es igual a: " << VII << endl;
	}
	else if (r == "VIII")
	{
		cout << "Du numero ramano " << r << " es igual a: " << VIII << endl;
	}
	else if (r == "IX")
	{
		cout << "Du numero ramano " << r << " es igual a: " << IX << endl;
	}
	else if (r == "X")
	{
		cout << "Du numero ramano " << r << " es igual a: " << X << endl;
	}
	else
	{
		cout << "Numero romano fura del rango" << endl;
	}

}

Romano::Romano()
{
}

Romano::~Romano()
{
}

struct Day {
	vector<double> hour
	{ 
		vector<double>(24) 
	};
};

struct Month 
{ // a month of temperature readings
	int month
	{ 
		
	};             // [0:11] January is 0
	vector<Day> day{ 32 }; // [1:31] one vector of readings per day
};
struct Year 
{ // a year of temperature readings, organized by month
	int year; // positive == A.D.
	vector<Month> month{ 12 }; // [0:11] January is 0
};


class Point
{
public:
	string Linea;
	fstream Archivo;
	vector<string>processed_points;
	vector<vector<int>>original_points;
	vector<int>Coor;
	int X;
	int Y;
	void Ingresar();
	void Abrir();
	void Mostrar();
	Point();
	~Point();

private:

};

void Point::Ingresar()
{
	cout << "Ingrese siete pares de coordenadas x,y:" << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << "------------" << endl;
		cout << "x: "; cin >> X; cout << endl;
		cout << "y: "; cin >> Y; cout << endl;
		Coor.push_back(X);
		Coor.push_back(Y);
		original_points.push_back(Coor);
		Coor.pop_back();
		Coor.pop_back();
	}
	cout << "----------------" << endl;
	cout << "Las coordenadas que ingreso son: " << endl;
	for (int i = 0; i < original_points.size(); i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << "(" << original_points[i][j] << "," << original_points[i][j + 1] << ")" << endl;
		}
	}
	Abrir();
}

void Point::Abrir()
{
	Archivo.open("mydata.txt", ios::out);

	for (int i = 0; i < original_points.size(); i++)
	{
		for (int j = 0; j < 1; j++)
		{
			Archivo << "(" << original_points[i][j] << "," << original_points[i][j + 1] << ")" << endl;
		}
	}
	Archivo.close();

	Archivo.open("mydata.txt", ios::in);
	while (!Archivo.eof())
	{
		getline(Archivo, Linea);
		if (Linea != "")
		{
			processed_points.push_back(Linea);
		}
	}
	Archivo.close();
	Mostrar();
}

void Point::Mostrar()
{
	//fstream*Archivo = new fstream("mydata.txt", ios::out);

	cout << "----------------" << endl;
	for (int i = 0; i < original_points.size(); i++)
	{
		for (int j = 0; j < 1; j++)
		{
			cout << "(" << original_points[i][j] << "," << original_points[i][j + 1] << ")" << endl;
		}
	}
	cout << "----------------" << endl;
	for (int i = 0; i < processed_points.size(); i++)
	{
		cout << processed_points[i] << endl;
	}
}

Point::Point()
{
}

Point::~Point()
{
}

void Suma()
{
	int Resultado = 0;
	int Dato;
	vector<int>Num;
	int Val;
	fstream Numeros;
	cout << "Ingrese datos para suamarlos despues, cuando quiera parar pulse '00':" << endl;
	for (int i=0;cin>>Val;)
	{
		if (Val == 00)
		{
			break;
		}
		Num.push_back(Val);
	}

	Numeros.open("Suma.txt", ios::out);
	for (int i = 0; i < Num.size(); i++)
	{
		if (Num.size() <= 1)
		{
			cout << "Cantidad insuficiente para sumar" << endl;
			break;
		}
		Numeros << Num[i] << " ";
	}
	Numeros.close();

	Numeros.open("Suma.txt", ios::in);
	for (int i = 0; i < Num.size(); i++)
	{
		Numeros >> Dato;
		Resultado = Resultado + Dato;
	}
	Numeros.close();
	cout << "La suma de todos los numeros que ingresaste es: " << Resultado;
}

void Temperaturas()
{
	fstream Temp;
	char Tipo;
	double Temperatura;
	cout << "Ingrese 50 temperaturas diferentes, seran Celcios(c) o Farenheit(f)?: " << endl;
	cout << "Tipo de temperatura: "; cin >> Tipo;
	Temp.open("raw_temps.txt", ios::out);
	for (int i = 0; i < 50; i++)
	{
		cin >> Temperatura >> Tipo;
		Temp << Temperatura << endl;
	}
}

void temp_stats()
{
	fstream Archivo;
	char Tipo;
	double Temp;
	double Dato = 0;
	double Media = 0;
	double Mediana = 0;
	double C;
	double F;
	vector<int>Valores;
	Archivo.open("raw_temps.txt", ios::in);
	while (!Archivo.eof())
	{
		Archivo >> Dato;
		Archivo >> Tipo;
		if (Tipo == 'c' || Tipo == 'C')
		{
			C = Dato;
			F = (C * 9 / 5) + 32;
			
			cout << "Sus grados celsius convertidos a Farenheit son: " << endl;
			cout << F << endl;
			Valores.push_back(F);
		}
		if (Tipo == 'f' || Tipo == 'F')
		{
			F = Dato;
			C = (F - 32) * 5 / 9;
			cout << "Sus grados Farenheit convertidos a Celsisus son: " << endl;
			cout << C << endl;
			Valores.push_back(C);
		}

	}
	Archivo.close();

	for (int i = 0; i < Valores.size(); i++)
	{
		for (int j = 0; j < Valores.size()-1; j++)
		{
			if (Valores[j] < Valores[j + 1])
			{
				Temp = Valores[j];
				Valores[j] = Valores[j + 1];
				Valores[j + 1] = Temp;
			}
		}
	}

	for (int i = 0; i < Valores.size(); i++)
	{
		Dato = Valores[i];
		Media = Media + Dato;
	}

	if (Valores.size() % 2 == 0)
	{
		Mediana = Valores[(Valores.size() / 2) - 1] + Valores[(Valores.size() / 2)];
		Mediana = Mediana / 2;
	}
	if (Valores.size() % 2 != 0)
	{
		Mediana = Valores[(Valores.size() / 2)];
	}

	cout << "Su media de temperaturas es: " << Media / Valores.size() << endl;
	cout << "Su mediana de temperaturas es: " << Mediana;
}

void Year()
{
	
	/*cout << "Please enter input file name\n";
	string iname;
	cin >> iname;
	ifstream ifs{ iname };
	if (!ifs)
	{
		cout << "can't open input file " << iname << endl;
	}
	ifs.exceptions(ifs.exceptions() | ios_base::badbit); 
	
	cout << "Please enter output file name\n";
	string oname;
	cin >> oname;
	ofstream ofs{ oname };
	if (!ofs) 
	{
		cout << "can't open input file " << oname << endl;
	}
	
	vector<Year> ys;
	while (true) 
	{
		Year y; 
		if (!(ifs >> y))
		{
			break;
		}
		ys.push_back(y);
	}
	cout << "read " << ys.size() << " years of readings\n";
	for (Year& y : ys)
	{
		print_year(ofs, y);
	}*/
}

void Combinacion()
{
	fstream Archivo;
	string Dato;
	string Nombre1;
	string Nombre2;
	string Nombre3;
	vector<string>Datos1;
	vector<string>Datos2;
	cout << "Escribe el nombre de un archivo: " << endl;
	cin >> Nombre1;
	cout << "Escribe el nombre de un archivo: " << endl;
	cin >> Nombre2;

	Archivo.open(Nombre1 + ".txt", ios::in);
	if (!Archivo)
	{
		cout << "can't open input file " << Nombre1 << endl;
	}

	while (!Archivo.eof())
	{
		Archivo >> Dato;
		Datos1.push_back(Dato);
	}
	Archivo.close();

	Archivo.open(Nombre2 + ".txt", ios::in);
	if (!Archivo)
	{
		cout << "can't open input file " << Nombre2 << endl;
	}

	while (!Archivo.eof())
	{
		Archivo >> Dato;
		Datos2.push_back(Dato);
	}
	Archivo.close();

	cout << "Escribe el nombre del archivo nuevo donde quiera guaradar el contenido de los archivos anteriores: " << endl;
	cin >> Nombre3;
	Archivo.open(Nombre3 + ".txt", ios::out);
	for (int i = 0; i < Datos1.size(); i++)
	{
		Archivo << Datos1[i] << endl;
	}
	for (int i = 0; i < Datos2.size(); i++)
	{
		Archivo << Datos2[i] << endl;
	}
	Archivo.close();
}

void Combinacion2()
{

	vector<string>Num;
	string Val;
	vector<string>Dato;
	vector<string>Dato2;
	fstream Archivo;
	string Nombre1;
	string Nombre2;
	string Nombre3;
	cout << "Escribe el nombre de un archivo: " << endl;
	cin >> Nombre1;
	cout << "Escribe el nombre de un archivo: " << endl;
	cin >> Nombre2;
	cout << "Ingrese laa palabras que quiera agregar aun archivo, cuando quiera parar pulse '&':" << endl;
	for (int i = 0; cin >> Val;)
	{
		if (Val == "&")
		{
			break;
		}
		Dato.push_back(Val);
	}

	Archivo.open(Nombre1+".txt", ios::out);
	for (int i = 0; i < Dato.size(); i++)
	{
		Archivo << Dato[i] << " ";
	}
	Archivo.close();

	cout << "Ingrese laa palabras que quiera agregar un segundo archivo, cuando quiera parar pulse '&':" << endl;
	for (int i = 0; cin >> Val;)
	{
		if (Val == "&")
		{
			break;
		}
		Dato2.push_back(Val);
	}

	Archivo.open(Nombre2 + ".txt", ios::out);
	for (int i = 0; i < Dato2.size(); i++)
	{
		Archivo << Dato2[i] << " ";
	}
	Archivo.close();

	cout << "Escribe el nombre de un tercer archivo: " << endl;
	cin >> Nombre3;
	Archivo.open(Nombre3 + ".txt", ios::out);
	for (int i = 0; i < Dato.size(); i++)
	{
		Archivo << Dato[i] << " ";
	}
	for (int i = 0; i < Dato2.size(); i++)
	{
		Archivo << Dato2[i] << " ";
	}
	Archivo.close();

}

void Lin()
{
	fstream Archivo;
	char Cadena[255];
	string Frase;
	Archivo.open("Linea.txt", ios::in);
	while (!Archivo.eof())
	{
		Archivo.getline(Cadena, 255, '\n');
		Frase = Cadena;
		for (int i = 0; i < Frase.size(); i++)
		{
			
		}
	}

}

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

void Abrir()
{
	fstream Archivo;
	string Nombre1;
	cout << "Escribe el nombre de un archivo: " << endl;
	cin >> Nombre1;
	Archivo.open(Nombre1 + ".txt", ios::out);
	while (!Archivo.eof())
	{
		getline(Archivo, Nombre1);
		cout << Nombre1 << endl;
	}
}

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
	case 'T':
	{
		double val;
		val = x;
		return Token(number, val); //llamar a la funcion para llenar el token
	}
	case 'X':
	{
		Abrir();
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
		if (d < 0)
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


int Calculadora() // iniciamos el programa

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

int main()
{
	Point A;
	char Eleccion;
	cout << "Elija el programa que quiera usar" << endl;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case '1':
		A.Ingresar();
		break;
	case '2':
		Suma();
		break;
	case '3':
		Temperaturas();
		break;
	case '4':
		temp_stats();
		break;
	case '5':
		Year();
		break;
	case '6':
		Combinacion();
		break;
	case '7':
		Combinacion2();
		break;
	case '8':
		Lin();
		break;
	case '9':
		Calculadora();
		break;
	default:
		break;
	}
	cin.ignore();
	cin.get();
	return 0;
}






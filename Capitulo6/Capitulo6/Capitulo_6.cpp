#include "Includes.h"

class Name_Value
{
public:
	string Name;
	int Age;
	Name_Value(string N, int A)
		:Name(N), Age(A) { }

};

class Token {
public:
	char kind;        // what kind of token
	double value;     // for numbers: a value 
	Token(char ch)    // make a Token from a char
		:kind(ch), value(0) { }
	Token(char ch, double val)     // make a Token from a char and a double
		:kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
	Token_stream();   // make a Token_stream that reads from cin
	Token get();      // get a Token (get() is defined elsewhere)
	void putback(Token t);    // put a Token back
private:
	bool full;        // is there a Token in the buffer?
	Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()
	:full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
	if (full) error("putback() into a full buffer");
	buffer = t;       // copy t to buffer
	full = true;      // buffer is now full
	
}

//------------------------------------------------------------------------------

Token Token_stream::get()
{
	if (full) {       // do we already have a Token ready?
		// remove token from buffer
		full = false;
		return buffer;
	}

	char ch;
	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)
	tolower(ch);
	

	switch (ch) {
	case '=':    // for "print"
	case '#':    // for "quit"
	case '{': case '}': case '(': case ')': case '+': case '-':  case '!': case '*': case '/':
		return Token(ch);        // let each character represent itself
	case '.':
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
	{
		cin.putback(ch);         // put digit back into the input stream
		double val;
		cin >> val;              // read a floating-point number
		return Token('8', val);   // let '8' represent "a number"
	}
	
	default:
		error("Bad token");
	}
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '{':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != '}') error("'}' expected");
		return d;
	}

	case '(':    // handle '(' expression ')'
	{
		double d = expression();
		t = ts.get();
		if (t.kind != ')') error("')' expected");
			return d;
	}
	case '8':            // we use '8' to represent a number
		return t.value;  // return the number's value
	default:
		error("primary expected");
	}
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
	
	double left = primary();
	Token t = ts.get();
	// get the next token from token stream
	int Temp = left;
	int Resultado = left;

	while (true) {
		switch (t.kind) {
		case '!':
			if (Resultado == 0)
			{
				left = 1;
				t = ts.get();
				break;
			}
			for (int i = 1; i < Temp; i++)
			{
				Resultado = Resultado * (Temp - i);
				
			}
			left = Resultado;
			t = ts.get();
			break;
		case '*':
			left *= primary();
			t = ts.get();
			break;
		case '/':
		{
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= d;
			t = ts.get();
			break;
		}
		default:
			ts.putback(t);     // put t back into the token stream
			return left;
		}
	}
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
	double left = term();     // read and evaluate a Term
	Token t = ts.get();        // get the next token from token stream

	while (true) {
		switch (t.kind) {
		case '+':
			left += term();    // evaluate Term and add
			t = ts.get();
			break;
		case '-':
			left -= term();    // evaluate Term and subtract
			t = ts.get();
			break;
		default:
			ts.putback(t);     // put t back into the token stream
			return left;       // finally: no more + or -: return the answer
		}
	}
}

//------------------------------------------------------------------------------

int Calculadora()
try
{
	string Nombre;
	int Edad;
	char eleccion;
	vector<Name_Value>Vec;
	double val = 0;


	cout << "Bienvenido a nuestra calculadora simple." << endl;
	cout << "Por favor ingrese expresiones usando números de punto flotante " << endl;
	cout << "Cuando quiera terminar pulse '#', si quiere ver su resultado pulse '='" << endl;
	cout << "Puedes usar +, -, *, /, (), {} y !" << endl;
	cout << "Si quiere ingresar un nombreo y edad pulse '&' si no es asi pulse cualquier otra tecla" << endl;

	cin >> eleccion;

	if (eleccion == '&')
	{

		cout << "Ingrse su nombre: "; cin >> Nombre; cout << endl;
		cout << "Ingrese su edad: "; cin >> Edad; cout << endl;
		Name_Value(Nombre, Edad);
	}

	if (Vec.size() == 0)
	{
		Vec.push_back(Name_Value(Nombre, Edad));
		return 0;
	}


	while (cin) {
		Token t = ts.get();

		if (t.kind == '#') break; // 'q' for quit
		if (t.kind == '=')        // ';' for "print now"
			cout << "=" << val << '\n';
		else
			ts.putback(t);
		val = expression();
	}
	keep_window_open();
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}

void TyV()
{
	int Toros = 0;
	int Vacas = 0;
	char Val1;
	char Val2;
	char Val3;
	char Val4;
	vector<char>Letras = { 'a','b','c','d','e','f','g','h','i','g','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z' };
	vector <char> Valores;
	cout << "Vamoa jugar el uego toros y vacas, tienes que adivinar las letras elegidas, ingresa 4 letras si tienes alguno bien te diremos 1 toro" << endl;
	cout << "si tienes dos letras bien diremos 2 toros y asi sucecivamente hasta que tengas 4 toros, comencemos, las vacas son las letras que tiene incorrectos" << endl;

	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		Valores.push_back(Letras[rand() % 26]);
	}

	while (Toros < 4)
	{
		Toros = 0;
		Vacas = 0;
		cout << "Ingrese su primera letra" << endl;
		cin >> Val1;
		cout << "Ingrese su segunda letra" << endl;
		cin >> Val2;
		cout << "Ingrese su tercera letra" << endl;
		cin >> Val3;
		cout << "Ingrese su cuarta letra" << endl;
		cin >> Val4;

		if (Val1 == Valores[0])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}

		if (Val2 == Valores[1])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}

		if (Val3 == Valores[2])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}

		if (Val4 == Valores[3])
		{
			Toros = Toros + 1;
		}
		else
		{
			Vacas = Vacas + 1;
		}
		cout << "Toros: " << Toros << endl;
		cout << "Vacas: " << Vacas << endl;

	}

	cout << "Felicidades adivinaste el numero el cual es: " << Val1 << Val2 << Val3 << Val4 << endl;

}

int Permutaciones(int Val1, int Val2)
{
	int Temp = Val1;
	int Temp2 = Val1 - Val2;
	int Resultado1 = Val1;
	int Resultado2 = Val1-Val2;
	int Resultado3 = 0;

	if (Resultado1 == 0)
	{
		Resultado1 = 1;
		
	}
	else
	{
		for (int i = 1; i < Temp; i++)
		{
			Resultado1 = Resultado1 * (Temp - i);

		}
	}
	

	if (Resultado2 == 0)
	{
		Resultado2 = 1;

	}
	else
	{
		for (int i = 1; i < Temp2; i++)
		{
			Resultado2 = Resultado2 * (Temp2 - i);

		}
	}
	

	Resultado3 = Resultado1 / Resultado2;

	return Resultado3;

}

int Combinaciones(int Val1, int Val2, int Resultado3)
{
	int Valor2 = Val2;
	int Temp = Val2;
	int Resultado = 0;
	Resultado3= Permutaciones(Val1, Val2);

	if (Valor2 == 0)
	{
		Valor2 = 1;

	}
	else
	{
		for (int i = 1; i < Temp; i++)
		{
			Valor2 = Valor2 * (Temp - i);

		}
	}
	Resultado = Resultado3 / Valor2;
	cout << "Su resultado es: " << Resultado << endl;
	return 0;
}

void PoC( int Resultado3)
{
	int Val1 = 0;
	int Val2 = 0;
	char Eleccion;
	cout << "Aqui podra hacer permutaciones o Combinaciones, pero primero ingrese sus dos valores" << endl;
	cout << "Primer numero: "; cin >> Val1; cout << endl;
	cout << "Segundo numero: "; cin >> Val2; cout << endl;
	cout << "Si quiere hacer permutaciones pulse P y para combinaciones C, en caso de no querer ninguna pulse cualquier otra tecla" << endl;
	cin >> Eleccion;
	tolower(Eleccion);

	switch (Eleccion)
	{
	case 'p':
		Resultado3=Permutaciones(Val1,Val2);
		cout << "Su resultado es: " << Resultado3 << endl;
		break;
	case 'c':
		Combinaciones(Val1,Val2, Resultado3);
		break;
	default:
		break;
	}
}


int main()
{
	int Resultado3 = 0;
	int Eleccion;
	cout << "Ingrese el numero del programa que quiera usar" << endl;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case 1:
		Calculadora();
		break;

	case 2:
		TyV();
		break;

	case 3:
		PoC(int(Resultado3));
		break;

	default:
		break;
	}
	cin.get();
	cin.ignore();
}

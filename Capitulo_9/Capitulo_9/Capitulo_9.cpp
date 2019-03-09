
#include "Includes.h"

class Dinero
{
public:
	double Dolar;
	double Cantidad;
	double Decimal;
	int D;
	Dinero();
	void Suma();
	void Resta();
	void Divicion();
	void Multiplicacion();
	void IngresaDinero();
	~Dinero();
};

Dinero::Dinero()
{
}

void Dinero::Suma()
{
	cout << "Porque cantidad lo vas a sumar?" << endl;
	cin >> Cantidad;
	Dolar = Dolar + Cantidad;
	D = Dolar;
	Decimal = Dolar - D;
	if (D == 0)
	{
		cout << "Su resultado es: " << Dolar;
	}
	else
	{
		if (Decimal > 0.5)
		{
			Dolar = Dolar + (1 - Decimal);
		}
		if (Decimal < 0.5)
		{
			Dolar = Dolar - Decimal;
		}
		cout << "Su resultado es: " << Dolar;
	}
	
}

void Dinero::Resta()
{
	cout << "Porque cantidad lo vas a restar?" << endl;
	cin >> Cantidad;
	Dolar = Dolar - Cantidad;
	D = Dolar;
	Decimal = Dolar - D;
	if (D == 0)
	{
		cout << "Su resultado es: " << Dolar;
	}
	else
	{
		if (Decimal > 0.5)
		{
			Dolar = Dolar + (1 - Decimal);
		}
		if (Decimal < 0.5)
		{
			Dolar = Dolar - Decimal;
		}
		cout << "Su resultado es: " << Dolar;
	}
}

void Dinero::Divicion()
{
	cout << "Porque cantidad lo vas a dividir?" << endl;
	cin >> Cantidad;
	Dolar = Dolar / Cantidad;
	D = Dolar;
	Decimal = Dolar - D;
	if (D == 0)
	{
		cout << "Su resultado es: " << Dolar;
	}
	else
	{
		if (Decimal > 0.5)
		{
			Dolar = Dolar + (1 - Decimal);
		}
		if (Decimal < 0.5)
		{
			Dolar = Dolar - Decimal;
		}
		cout << "Su resultado es: " << Dolar;
	}
}

void Dinero::Multiplicacion()
{
	cout << "Porque cantidad lo vas a multiplicar?" << endl;
	cin >> Cantidad;
	Dolar = Dolar * Cantidad;
	D = Dolar;
	Decimal = Dolar - D;
	if (D == 0)
	{
		cout << "Su resultado es: " << Dolar;
	}
	else
	{
		if (Decimal > 0.5)
		{
			Dolar = Dolar + (1 - Decimal);
		}
		if (Decimal < 0.5)
		{
			Dolar = Dolar - Decimal;
		}
		cout << "Su resultado es: " << Dolar;
	}
}

void Dinero::IngresaDinero()
{
	char Eleccion;
	cout << "Cuantos dolares tienes? "; cin >> Dolar;
	cout << "Que quiere hacer con ellos? +, -, /, *" << endl;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case '+':
		Suma();
		break;
	case '-':
		Resta();
		break;
	case '/':
		Divicion();
		break;
	case '*':
		Multiplicacion();
		break;
	default:
		break;
	}
}

Dinero::~Dinero()
{
}

class Racional
{
public:
	int Numerador;
	int Denominador;
	double Decimal;
	void Numeros();
	void Transformar();
	Racional();
	~Racional();

private:

};

void Racional::Numeros()
{
	char Respuesta;
	cout << "Ingrese su numerador" << endl;
	cin >> Numerador;
	cout << "Ingrese su denominaodr" << endl;
	cin >> Denominador;
	cout << "Su resultado: " << Numerador << " / " << Denominador << endl;
	cout << "Quire transformarlo a decimal?" << endl;
	cin >> Respuesta;
	if (Respuesta == 'y')
	{
		Transformar();
	}
}

void Racional::Transformar()
{
	Decimal = Numerador / Denominador;
	cout << "Tu racional convertido a decimal es: " << Decimal << endl;
}

Racional::Racional()
{
}

Racional::~Racional()
{
}

class Date
{
public:
	
	int Dia=1;
	int Semana=0;
	void next_workday();
	int week_of_year();
};

void Date::next_workday()
{
	int Limite;
	int Contador = 0;
	cout << "Escribe un numero de semanas y te dire cuantos dias laborales hay en total" << endl;
	cin >> Limite;
	while (Semana<Limite)
	{
		Semana=week_of_year();
		for (int i = 0; i < 7; i++)
		{
			if (Dia == 1 || Dia == 2)
			{
				Dia = Dia + 1;
				continue;
			}
			Dia = Dia + 1;
			Contador = Contador + 1;
		}
		Dia = 0;
	}
	cout << "En " << Limite << " semanas hay: " << Contador << " dias libres" << endl;
}

int Date::week_of_year()
{
	Semana = Semana + 1;
	return Semana;
}


class Biblioteca
{
public:
	vector<vector<string>>Patron;
	vector<vector<string>>Book;
	vector<vector<string>>Transaccion;
	string Name;
	string Tarjeta;
	string Cuota;
	string ISBN;
	string Titulo;
	string Autor;
	string Fecha_Copy;
	void IngresarL();
	void IngresarP();
	void Sacar();
	~Biblioteca();

private:

};


void Biblioteca::IngresarL()
{
	vector<string>Vec;
	cout << "Escriba el ISBN del libro: ";
	cin >> ISBN;
	Vec.push_back(ISBN);
	cout << endl;
	cout << "Escriba el Titulo del libro: ";
	cin >> Titulo;
	Vec.push_back(Titulo);
	cout << endl;
	cout << "Escriba el Autor del libro: ";
	cin >> Autor;
	Vec.push_back(Autor);
	cout << endl;
	cout << "Escriba el Fecha de Copyrigth del libro: ";
	cin >> Fecha_Copy;
	Vec.push_back(Fecha_Copy);
	cout << endl;
	Book.push_back(Vec);

	char Eleccion;
	cout << "Quiere ingresar un usuario pulse 1" << endl;
	cout << "Quiere ingresar un libro pulse 2" << endl;
	cout << "Quiere sacar un libro pulse 3" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		IngresarP();
		break;
	case '2':
		IngresarL();
		break;
	case '3':
		Sacar();
		break;
	default:
		break;
	}
}

void Biblioteca::IngresarP()
{
	vector<string>Vec;
	cout << "Escriba el nombre del usuario: ";
	cin >> Name;
	Vec.push_back(Name);
	cout << endl;
	cout << "Escriba el Numero de targeta: ";
	cin >> Tarjeta;
	Vec.push_back(Tarjeta);
	cout << endl;
	cout << "Tiene alguna deuda si/no ";
	cin >> Cuota;
	if (Cuota == "si")
	{
		cout << "Cuanto debe?";
		cin >> Cuota;
	}
	Vec.push_back(Cuota);
	cout << endl;
	Patron.push_back(Vec);
	char Eleccion;
	cout << "Quiere ingresar un usuario pulse 1" << endl;
	cout << "Quiere ingresar un libro pulse 2" << endl;
	cout << "Quiere sacar un libro pulse 3" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		IngresarP();
		break;
	case '2':
		IngresarL();
		break;
	case '3':
		Sacar();
		break;
	default:
		break;
	}
}

void Biblioteca::Sacar()
{
	string Matricula;
	string Matricula2;
	String Debe;
	bool Registrado;
	bool En_Biblioteca;
	int Contador = 0;
	cout << "Ingrese el ISBN del libro que desea sacar" << endl;;
	cin >> Matricula;

	for (int i = 0; i < Book.size(); i++)
	{
		for (int j = 0; j < Book.size(); j++)
		{
			if (Matricula == Book[i][j])
			{
				Contador = Contador + 1;
			}
		}

	}

	if (Contador == 0)
	{
		En_Biblioteca = false;
	}

	if (!En_Biblioteca)
	{
		cout << "Libro no encontrado, intente de nuevo" << endl;
		Sacar();
	}

	cout << "Ingrese el numero de tarjeta del usuario" << endl;;
	cin >> Matricula2;
	Contador = 0;
	for (int i = 0; i < Patron.size(); i++)
	{
		for (int j = 0; j < Patron.size(); j++)
		{
			if (Matricula2 == Patron[i][j])
			{
				Contador = Contador + 1;
			}
		}

	}
	if (Contador == 0)
	{
		Registrado = false;
	}

	if (!Registrado)
	{
		cout << "Numero de usuario invalido o inexistente, intentelo de nuevo." << endl;
		Sacar();
	}

	for (int i = 0; i < Patron.size(); i++)
	{
		for (int j = 0; j < Patron.size(); j++)
		{
			if (j==2)
			{
				if (Patron[i][j] != "no")
				{
					cout << "Lo siento no puede sacar un libro usted debe: " << Patron[i][j] << endl;
					Sacar();
				}
			}
		}

	}


	for (int i = 0; i < Book.size(); i++)
	{
		for (int j = 0; j < Book.size(); j++)
		{
			if (Matricula == Book[i][j])
			{
				Book.erase(Book.begin() + i);
			}
		}

	}
	cout << "Libro sacado que tenga un buen dia" << endl;

	char Eleccion;
	cout << "Quiere ingresar un usuario pulse 1" << endl;
	cout << "Quiere ingresar un libro pulse 2" << endl;
	cout << "Quiere sacar un libro pulse 3" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		IngresarP();
		break;
	case '2':
		IngresarL();
		break;
	case '3':
		Sacar();
		break;
	default:
		break;
	}
}

Biblioteca::~Biblioteca()
{
}

class Usuario
{
public:
	vector<vector<string>>Usua;
	string Name;
	string Tarjeta;
	string Cuota;
	void Datos();
	void Ingresar();
	~Usuario();

};

void Usuario::Datos()
{
	for (int i = 0; i < Usua.size(); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				cout << "Nombre: ";
				cout << Usua[i][j] << endl;
			}
			if (j == 1)
			{
				cout << "Tarjeta: ";
				cout << Usua[i][j] << endl;
			}
			if (j == 2)
			{
				cout << "Debe: ";
				cout << Usua[i][j] << endl;
			}

		}
		cout << "-------------" << endl;
	}

	char Eleccion;
	cout << "Quiere ingresar otro usuario pulse 1" << endl;
	cout << "Quiere ver los datos pulse 2" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		Ingresar();
		break;
	case '2':
		Datos();
		break;
	default:
		break;
	}
}

void Usuario::Ingresar()
{
	vector<string>Vec;
	cout << "Escriba el nombre del usuario: ";
	cin >> Name;
	Vec.push_back(Name);
	cout << endl;
	cout << "Escriba el Numero de targeta: ";
	cin >> Tarjeta;
	Vec.push_back(Tarjeta);
	cout << endl;
	cout << "Tiene alguna deuda si/no ";
	cin >> Cuota;
	if (Cuota == "si")
	{
		cout << "Cuanto debe?";
		cin >> Cuota;
	}
	Vec.push_back(Cuota);
	cout << endl;
	Usua.push_back(Vec);
	char Eleccion;
	cout << "Quiere ingresar otro usuario pulse 1" << endl;
	cout << "Quiere ver los datos pulse 2" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		Ingresar();
		break;
	case '2':
		Datos();
		break;
	default:
		break;
	}
}

Usuario::~Usuario()
{
}

enum class Genero
{
	ficción, no_ficción, publicaciones_periódicas, biografía, hijos
};

class Libro
{
public:
	vector<vector<string>>Book;
	string ISBN;
	string Titulo;
	string Autor;
	string Fecha_Copy;
	Genero Gen;
	bool Registrado;
	void Datos();
	void Ingresar();
	void Sacar();
	~Libro();
};

Libro& operator <<(Libro N, Libro A)
{
	for (int i = 0; i < N.Book.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
			{
				cout << "ISBN: ";
				cout << N.Book[i][j] << endl;
			}
			if (j == 1)
			{
				cout << "Titulo: ";
				cout << N.Book[i][j] << endl;
			}
			if (j == 2)
			{
				cout << "Autor: ";
				cout << N.Book[i][j] << endl;
			}
			if (j == 3)
			{
				cout << "Fecha copyright: ";
				cout << N.Book[i][j] << endl;
			}

		}
		cout << "-------------" << endl;
	}
	return N;
}

void Libro::Datos()
{
	if (Book.size() < 1)
	{
		cout << "Lo sentimos de momento no tenemos libros" << endl;
		return;
	}

	for (int i = 0; i < Book.size(); i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
			{
				cout << "ISBN: ";
				cout << Book[i][j] << endl;
			}
			if (j == 1)
			{
				cout << "Titulo: ";
				cout << Book[i][j] << endl;
			}
			if (j == 2)
			{
				cout << "Autor: ";
				cout << Book[i][j] << endl;
			}
			if (j == 3)
			{
				cout << "Fecha copyright: ";
				cout << Book[i][j] << endl;
			}
			
		}
		cout << "-------------" << endl;
	}

	char Eleccion;
	cout << "Quiere ingresar un libro pulse 1" << endl;
	cout << "Quiere sacar un libro pulse 2" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		Ingresar();
		break;
	case '2':
		Sacar();
		break;
	default:
		break;
	}

}

void Libro::Ingresar()
{
	vector<string>Vec;
	cout << "Escriba el ISBN del libro: ";
	cin >> ISBN;
	Vec.push_back(ISBN);
	cout << endl;
	cout << "Escriba el Titulo del libro: ";
	cin >> Titulo;
	Vec.push_back(Titulo);
	cout << endl;
	cout << "Escriba el Autor del libro: ";
	cin >> Autor;
	Vec.push_back(Autor);
	cout << endl;
	cout << "Escriba el Fecha de Copyrigth del libro: ";
	cin >> Fecha_Copy;
	Vec.push_back(Fecha_Copy);
	cout << endl;
	Book.push_back(Vec);

	char Eleccion;
	cout << "Quiere revisar los datos de un libro pulse 1" << endl;
	cout << "Quiere ingresar un libro pulse 2" << endl;
	cout << "Quiere sacar un libro pulse 3" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		Datos();
		break;
	case '2':
		Ingresar();
		break;
	case '3':
		Sacar();
		break;
	default:
		break;
	}
}

void Libro::Sacar()
{
	string Matricula;
	cout << "Ingrese el ISBN del libro que desea sacar" << endl;;
	cin >> Matricula;

	for (int i = 0; i < Book.size(); i++)
	{
		for (int j = 0; j < Book.size(); j++)
		{
			if (Matricula == Book[i][j])
			{
				Book.erase(Book.begin()+i);
			}
		}
		
	}

}

Libro::~Libro()
{
}

class Name_pairs
{
public:
	vector<string>Respaldo;
	vector<string>Nombre;
	vector<double>Edad;
	string Name;
	double Age;
	void read_names();
	void read_ages();
	void Print();
	void Acomodo();
	void Print2();
	~Name_pairs();
};



Name_pairs::~Name_pairs(){}

void Name_pairs::Print2()
{
	cout << "--------" << endl;
	for (int i = 0; i < Nombre.size(); i++)
	{
		cout << Nombre[i] << " ";
		for (int j = 0; j < Respaldo.size(); j++)
		{
			if (Respaldo[j] == Nombre[i])
			{
				cout << Edad[j] << endl;
			}
		}
	}
}

void Name_pairs::Acomodo()
{
	string Temp;
	for (int i = 0; i < Nombre.size(); i++)
	{
		Respaldo.push_back(Nombre[i]);
	}

	for (int i = 0; i < Nombre.size() - 1; i++)
	{
		for (int j = 0; j < Nombre.size() - 1; j++)
		{
			if (Nombre[j] > Nombre[j + 1])
			{
				Temp = Nombre[j];
				Nombre[j] = Nombre[j + 1];
				Nombre[j + 1] = Temp;
			}
		}
	}
	Print2();
}

Name_pairs& operator <<(Name_pairs N, Name_pairs A)
{
	cout << "--------" << endl;
	for (int i = 0; i < N.Nombre.size(); i++)
	{
		cout << N.Nombre[i] << " ";
		cout << N.Edad[i] << endl;
	}
	return N;
}

void Name_pairs::Print()
{
	cout << "--------" << endl;
	for (int i = 0; i < Nombre.size(); i++)
	{
		cout << Nombre[i] << " ";
		cout << Edad[i] << endl;
	}
	Acomodo();
}


void Name_pairs::read_ages()
{
	cout << "Escriba la edad de las personas:" << endl;
	for (int i = 0; i < Nombre.size(); i++)
	{
		cin >> Age;
		Edad.push_back(Age);
	}
	
}

void Name_pairs::read_names()
{
	cout << "Escriba el nombre de las personas, cuando quiera para pulse'!':" << endl;
	for (int i = 0; cin >> Name;)
	{
		if (Name == "!")
		{
			break;
		}
		else
		{
			Nombre.push_back(Name);
		}
	}
	read_ages();
}


int add_day(int D)
{	
	D++;
	return D;
}

void Fecha()
{
	vector<string>Mes = {"Enero","Febrero","Marzo" ,"Abril" ,"Mayo" ,"Junio" ,"Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int Dia = 25;
	int Año = 1978;
	int i = 5;

	while (Año < 2019)
	{
		cout << "------+++++++++++////////******" << endl;
		cout << "Mes: " << Mes[i] << endl;
		cout << "Dia: " << Dia << endl;
		cout << "Año: " << Año << endl;
		if (Dia == 31)
		{
			i++;
			Dia = 0;
			if (i == 12)
			{
				i = 0;
				Año++;
			}
		}
		Dia = add_day(Dia);
	}
}

struct X {
	void f(int x) {
		struct Y {
			int f() { return 1; } int m;
		};
		int m;
		m = x; Y m2;
		
			return f(m2.f());
	}
	int m; void g(int m) {
		if (m) f(m + 2); else {
			g(m + 2);
		}
	}
	X() { } void m3() {
	}
};

//class My_vector {
//	vector<int> v; 
//public:
//	int largest()
//	{
//		int r = 0; 
//		for (int i = 0; i < v.size(); ++i)
//		{
//			r = max(r, abs(v[i]));
//		}
//		return r;
//	}
//};
//
//int x; 
//int y;
//int f()
//{
//	int x; 
//	x = 7; 
//	{
//		int x = y; 
//		++x; 
//	}
//	++x; 
//	return x;
//}

void Lib()
{
	Libro D;
	char Eleccion;
	cout << "Bienvenido, que quiere hacer" << endl;
	cout << "Quiere revisar los datos de un libro pulse 1" << endl;
	cout << "Quiere ingresar un libro pulse 2" << endl;
	cout << "Quiere sacar un libro pulse 3" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		D.Datos();
		break;
	case '2':
		D.Ingresar();
		break;
	case '3':
		D.Sacar();
		break;
	default:
		break;
	}

}

void Us()
{
	Usuario A;
	char Eleccion;
	cout << "Quiere ingresar un usuario pulse 1" << endl;
	cout << "Quiere ver los datos pulse 2" << endl;
	cout << "opcion: "; cin >> Eleccion;

	switch (Eleccion)
	{
	case '1':
		A.Ingresar();
		break;
	case '2':
		A.Datos();
		break;
	default:
		break;
	}
}

int main()
{
	Dinero H;
	Racional G;
	Date F;
	Biblioteca E;
	Libro C;
	Libro D;
	Name_pairs A;
	Name_pairs B;
	
	int a = 0;
	int Eleccion;
	cout << "Elige el numero del programa que quieras ver" << endl;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case 1:
		Fecha();
		break;
	case 2:
		A.read_names();
		A << B;
		A.Acomodo();
		break;
	case 4:
		Lib();
		C << D;
		break;
	case 5:
		E.IngresarP();
		break;
	case 6:
		F.next_workday();
		break;
	case 7:
		H.IngresaDinero();
		break;
	case 3:
		X a; a.f(2);
		break;
	
	}
	cin.ignore();
	cin.get();
	return 0;
}


#include "Includes.h"

class Name_pairs
{
public:
	string Name;
	int Age;
	Name_pairs(string N)
		:Name(N) { }
};

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

void NyA()
{
//	vector<string>Nombre;
//	vector<double>Edad;
//	string Persona;
//	
//	cout << "Escriba el nombre de las personas, cuando quiera para pulse'!':" << endl;
//	for (int i = 0; cin >> Persona;)
//
//	{
//		if (Persona == "!")
//		{
//			break;
//		}
//		else
//		{
//			Nombre.push_back(Name_pairs(Persona));
//		}
//
//	}
//	cout << "Escriba la edad de las personas " << endl;
//
//	for (int i = 0; i < Nombre.size(); i++)
//	{
//		cout << Nombre[i] << ":";
//		cin >> Edad;
//		Edad.push_back(Edad);
//	}
//	sort(name.begin(), name.end());
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

int main()
{
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
		NyA();
		break;
	case 3:
		X a; a.f(2);
		break;
	}
	cin.ignore();
	cin.get();
	return 0;
}
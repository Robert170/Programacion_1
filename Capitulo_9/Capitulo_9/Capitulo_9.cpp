#include <iostream>
using namespace std;
#include <vector>
#include <sstream>


int add_day(int D)
{	
	D++;
	return D;
}

void Fecha()
{
	vector<string>Mes = {"Enero","Febrero","Marzo" ,"Abril" ,"Mayo" ,"Junio" ,"Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	int Dia = 25;
	int A�o = 1978;
	int i = 5;

	while (A�o < 2019)
	{
		cout << "------+++++++++++////////******" << endl;
		cout << "Mes: " << Mes[i] << endl;
		cout << "Dia: " << Dia << endl;
		cout << "A�o: " << A�o << endl;
		if (Dia == 31)
		{
			i++;
			Dia = 0;
			if (i == 12)
			{
				i = 0;
				A�o++;
			}
		}
		Dia = add_day(Dia);
	}
		


}

int main()
{
	int Eleccion;
	cout << "Elige el numero del programa que quieras ver" << endl;
	cin >> Eleccion;
	switch (Eleccion)
	{
	case 1:
		Fecha();
		break;
	default:
		break;
	}
	cin.ignore();
	cin.get();
	return 0;
}
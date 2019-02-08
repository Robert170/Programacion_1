#include "Includes.h"

void Try1()
{
	double Yen = 109.79; // Un dolar es igual a 109.79 yenes
	double Kroner = 8.56;// un dolar es igual a 8.56 kroner
	double Libra = 0.78; // un dolar es igual a0.78 libras
	char Conversion = ' '; // a space is not a unit
	double Dolar;
	cout << "Cuantos dolares tiene " << endl;
	cin >> Dolar;
	cout << "A que los quiere convertir, si es yenes ingrese Y, si es kroner ingrese K y si son libras ingrese L" << endl;
	cin >> Conversion;
	if (Conversion == 'Y')
	{
		cout << "Sus dolares convertidos a yenes son: " << Yen * Dolar << endl;
	}
	else if (Conversion == 'K')
	{
		cout << "Sus dolares convertidos a Kroner son: " << Kroner * Dolar << endl;
	}

	else if (Conversion == 'L')
	{
		cout << "Sus dolares convertidos a Libras son: " << Libra * Dolar << endl;
	}
	else
	{
		cout << "Lo siento, no podemos hacer la conversion a ese tipo de moneda en estos momentos" << endl;
	}

	cin.ignore();
	cin.get();
}

void Try2()
{
	double Yen = 109.79; // Un dolar es igual a 109.79 yenes
	double Kroner = 8.56;// un dolar es igual a 8.56 kroner
	double Libra = 0.78; // un dolar es igual a0.78 libras
	double Yuan = 6.78; // un dolar es igial a 6.78 yuanes
	char Conversion = ' '; // a space is not a unit
	double Dolar;
	cout << "Cuantos dolares tiene " << endl;
	cin >> Dolar;
	cout << "A que los quiere convertir, si es yenes ingrese Y, si es kroner ingrese K, si son libras ingrese L y si son Yuanes ingrese U" << endl;
	cin >> Conversion;
	switch (Conversion)
	{
	case 'Y':
		cout << "Sus dolares convertidos a yenes son: " << Yen * Dolar << endl;
		break;
	case 'K':
		cout << "Sus dolares convertidos a Kroner son: " << Kroner * Dolar << endl;
		break;
		
	case 'L':
		cout << "Sus dolares convertidos a Libras son: " << Libra * Dolar << endl;
		break;

	case 'U':
		cout << "Sus dolares convertidos a Yuan son: " << Yuan * Dolar << endl;
		break;
	default:
		cout << "Lo siento, no podemos hacer la conversion a ese tipo de moneda en estos momentos" << endl;
		break;
	}

	cin.ignore();
	cin.get();
}

void Try3()
{
	char Abecedario;
	int Numero = 96; // start from 0
	while (Numero < 122) 
	{
		for (Abecedario = 'a'; Abecedario <= 'z'; Abecedario++) 
		{
			cout << Abecedario << '\t' << Numero + 1 << endl;
			++Numero;
		}
	}
}

void Try4()
{
	char Abecedario;
	int Numero = 96;
	char Mayusculas= 'A';
	for (Abecedario = 'a'; Abecedario <= 'z'; Abecedario++)
		{
			cout << Abecedario << '\t' << Numero + 1 << endl;
			++Numero;
		}
	cout << "--------" << endl;
	for (Abecedario = 'a'; Abecedario <= 'z'; Abecedario++)
	{
		cout << Abecedario << '\t' << Mayusculas++ << endl;
		
	}
}

int Square(int Valor)
{
	return pow(Valor,2);
}

void Try5()
{
	int Valor;
	int Cuadrado = 2;
	cout << "Ingrese un valor para sacar su cuadrado:" << endl;
	cin >> Valor;
	cout << "Su valor al cuadrado es: " << Square(Valor) << endl;
}

void Try6()
{
	string Palabra;
	string Frase;
	int i = 0;
	vector<string> words = { "hola", "mujer", "dinero", "carro", "perro", "videojuegos" };
	for (int i = 0; i < words.size(); i++)
		cout << words[i] << endl;
	cout << " " << endl;
	cout << "Eleja una palabra de las mostradas para remplazarla por un BLEEP" << endl;
	cin >> Palabra;
	for (int i = 0; i < words.size(); i++)
		if (Palabra == words[i])
		{
			words[i] = "BLEEP";
		}
	for (int i = 0; i < words.size(); i++)
		cout << words[i] << endl;
	cin.ignore();
	cin.get();
}

int Drill()
{
	vector <double> Metros;
	double Total;
	char Temp2;
	double Temp;
	char Eleccion;
	double Val1;
	double Val2;
	double Val3;
	char Unidad1;
	char Unidad2;
	char Unidad3;
	cout << "Ingrese tes valores" << endl;
	cin >> Val1 >> Val2 >> Val3;
	cout << "Ingrese undades para esos valores , las unidades pueden ser c(cm), i(in), f(ft) y m:" << endl;
	cin >> Unidad1 >> Unidad2 >> Unidad3;
	
	if (Unidad1 != 'c' && Unidad1 != 'i' && Unidad1 != 'f' && Unidad1 != 'm')
	{
		cout << "Esa unidad no esta disponible" << endl;
		return 0;
	}
	if (Unidad2 != 'c' && Unidad2 != 'i' && Unidad2 != 'f' && Unidad2 != 'm')
	{
		cout << "Esa unidad no esta disponible" << endl;
		return 0;
	}
	if (Unidad3 != 'c' && Unidad3 != 'i' && Unidad3 != 'f' && Unidad3 != 'm')
	{
		cout << "Esa unidad no esta disponible" << endl;
		return 0;
	}

	while (Val1 >= 0)
	{

		if (Val1 == Val2)
		{
			cout << "Val1 y Val2 son iguales:" << Val1 << " " << Val2 << endl;
		}

		if (Val1 == Val3)
		{
			cout << "Val1 y Val3 son iguales:" << Val1 << " " << Val3 << endl;	
		}

		if (Val2 == Val3)
		{
			cout << "Val2 y Val3 son iguales:" << Val2 << " " << Val3 << endl;
		}
		cout << Val1 << Unidad1 << " " << Val2 << Unidad2 << " " << Val3 << Unidad3 << endl;

		switch (Unidad1)
		{
		case 'c':
			Val1 = Val1 / 100;
			break;
			
		case 'i':
			Val1 = (Val1*2.54) / 100;
			break;

		case 'f':
			Val1 = (Val1 * 12)*2.54 / 100;
			break;

		case 'm':
			Val1 = Val1 * 1;
			break;
		}

		switch (Unidad2)
		{
		case 'c':
			Val2 = Val2 / 100;
			break;

		case 'i':
			Val2 = (Val2*2.54) / 100;
			break;

		case 'f':
			Val2 = (Val2 * 12)*2.54 / 100;
			break;

		case 'm':
			Val2 = Val2 * 1;
			break;
		}

		switch (Unidad3)
		{
		case 'c':
			Val3 = Val3 / 100;
			break;

		case 'i':
			Val3 = (Val3*2.54) / 100;
			break;

		case 'f':
			Val3 = (Val3 * 12)*2.54 / 100;
			break;

		case 'm':
			Val3 = Val3 * 1;
			break;
		}
		if (Val1 > Val2)
		{
			Temp = Val1;
			Temp2 = Unidad1;
			Val1 = Val2;
			Val2 = Temp;
			Unidad1 = Unidad2;
			Unidad2 = Temp2;


		}

		if (Val1 > Val3)
		{
			Temp2 = Unidad1;
			Temp = Val1;
			Val1 = Val3;
			Val3 = Temp;
			Unidad1 = Unidad3;
			Unidad3 = Temp2;
		}

		if (Val2 > Val3)
		{
			Temp2 = Unidad2;
			Temp = Val2;
			Val2 = Val3;
			Val3 = Temp;
			Unidad2 = Unidad3;
			Unidad3 = Temp2;
		}
		
		cout << Val1 <<"m" << " " << Val2 << "m" << " " << Val3 << "m" << endl;
		cout << "El numero mas grande es: " << Val3 << Unidad3 << endl;
		cout << "El numero mas pequeño es:" << Val1 << Unidad1 << endl;
		Total = Val1 + Val2 + Val3;
		Metros.push_back(Val1);
		Metros.push_back(Val2);
		Metros.push_back(Val3);
		cout << "Su valor total en metros es de: " << Total << "m" << endl;
		cout << "Si quiere terminar el ciclo pulse: |" << endl;
		cin >> Eleccion;
		if (Eleccion == '|')
		{
			break;

		}
		cout << "Ingrese tes valores" << endl;
		cin >> Val1 >> Val2 >> Val3;


	}
	cin.ignore();
	cin.get();
}

void Ejercicio1()
{
	double Nuevo;
	char Eleccion;
	vector<double> temps = { 5.7,8.2,6.5,2.0,4.9,7.3,6.6,8.8 }; // temperatures
	cout << "Estas son las temperaturas en grados celcius:" << endl;
	for (int i = 0; i < temps.size(); i++)
		cout << temps[i] << endl;
	cout << "quiere agregar otra? y/n:" << endl;
	cin >> Eleccion;
	if (Eleccion == 'y')
	{
		cout << "Ingrese su nueva temperatura:" << endl;
		cin >> Nuevo;  // read into temp
		temps.push_back(Nuevo);
	}
	if (Eleccion == 'n')
	{

	}
	
	double sum = 0;
	for (double x : temps)
	{
		sum = sum + x;
	}
	cout << "Las temperaturas ordenadas son:" << endl;
	sort(temps);
	for (int i = 0; i < temps.size(); i++)
		cout << temps[i] << endl;
	cout << "Promedio de las temperaturas: " << sum / temps.size() << '\n';
	cout << "Mediana de las temperaturas: " << temps[temps.size() / 2] << '\n';
}

void Ejercicio2()
{
	double Temp = 0;
	double Temp2;
	double Suma=0;
	vector<double> Valores = { 1.5,1.2,8.4,3.1,4.5,8.0,7.0,4.9 };
	for (double x : Valores)
	{
		Suma = Suma + x;
	}
	cout << "Distancia total entre todas las ciudades: " << Suma << endl;
	Temp2 = Valores[0];
	for (int i = 0; i < Valores.size()-1; i++)
	{
		if (Valores[i] > Temp)
		{
			Temp = Valores[i];
		}
		cout << "La mediana de " << Valores[i] << " y " << Valores[i + 1] << " es: " << (Valores[i] + Valores[i + 1]) / 2 << endl;
	}
	cout << "La distancia mas larga entre las ciudades es: " << Temp << endl;

	for (int i = 0; i < Valores.size() - 1; i++)
	{
		if (Valores[i] < Temp2)
		{
			Temp2 = Valores[i];
		}
	}
	cout << "La distancia mas corta entre las ciudades es: " << Temp2 << endl;
}
void Ejercicio3() ///////////////////////////////////////////////////////////////////////////////////
{
	vector<int>Numeros;
	vector<int>Numeros2;
	vector<int>Numeros3;
	vector<int>Numeros4;
	string Eleccion;
	
	for (int i = 0; i <100; i++)
	{
		Numeros.push_back(i);
	}
	cout << "Bienvenido al juego en el que la maquina te adivinara el numero en el que estas pensando del 1 al cien" << endl;
	cout << "Tu numero es mayor a 50?:" << endl;
	cin >> Eleccion;
	
	if (Eleccion == "Si" || Eleccion == "si")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] >= 50)
			{
				Numeros2.push_back(s);
			}
		}
	}
	if (Eleccion == "Si" || Eleccion == "si")
	{
		string Mayor75;
		cout << "Tu numero es mayor a 75?" << endl;
		cin >> Mayor75;
		if (Mayor75 == "Si" || Mayor75 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 75)
				{
					Numeros3.push_back(Numeros2[y]);
				}
			}
		}

		if (Mayor75 == "No" || Mayor75 == "no")
		{
			for (int i = 0; i < Numeros2.size(); i++)
			{
				if (Numeros2[i] <= 75)
				{
					Numeros3.push_back(Numeros2[i]);
				}
			}
		}

	}


	if (Eleccion == "No" || Eleccion == "no")
	{
		for (int s = 0; s < Numeros.size(); s++)
		{
			if (Numeros[s] <= 50)
			{
				Numeros2.push_back(s);
			}
		}


	}
	if (Eleccion == "No" || Eleccion == "no")
	{
		string Mayor25;
		cout << "Tu numero es mayor a 25?" << endl;
		cin >> Mayor25;
		if (Mayor25 == "Si" || Mayor25 == "si")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] >= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
		else if (Mayor25 == "no" || Mayor25 == "No")
		{
			for (int y = 0; y < Numeros2.size(); y++)
			{
				if (Numeros2[y] <= 25)
				{
					Numeros3.push_back(y);
				}
			}
		}
	}


	string Multiplos;
	if (Numeros3.back() == 25)
	{
		cout << "Tu numero es multiplo de 5?" << endl;
		cin >> Multiplos;
		if (Multiplos == "Si" || Multiplos == "si")
		{
			cout << "Tu numero es mayor 15?\n";
			cin >> Multiplos;
			if (Multiplos == "Si" || Multiplos == "si")
			{
				cout << "Tu numero es 20?\n";
				cin >> Multiplos;
				if (Multiplos == "Si" || Multiplos == "si")
				{
					cout << "Fin" << endl;
				}
				else
				{
					cout << "Tu numero es 25" << endl;
				}

			}
			else if (Multiplos == "No" || Multiplos == "no")
			{
				cout << "Tu numero es 15?" << endl;
				cin >> Multiplos;
				if (Multiplos == "Si" || Multiplos == "si")
				{
					cout << "Fin" << endl;
				}
				else if (Multiplos == "No" || Multiplos == "no")
				{
					cout << "Tu numero es 10?" << endl;
					cin >> Multiplos;
					if (Multiplos == "Si" || Multiplos == "si")
					{
						cout << "Fin" << endl;
					}
					else
					{
						cout << "Tu numero es 5" << endl;
					}
				}
			}
		}
		else if (Multiplos == "No" || Multiplos == "no")
		{
			cout << "Tu numero esta entre el 1 y el 13" << endl;
			cin >> Multiplos;
			if (Multiplos == "No" || Multiplos == "no")
			{
				cout << "Tu numero esta entre 14 y 24" << endl;
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "Si" || Multiplos == "si")
				{
					cout << "Tu numero es 18?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;
					}
					else if ((Multiplos == "no" || Multiplos == "No"))
					{
						cout << "Tu numero es 24?" << endl;
						cin >> Multiplos;
						if (Multiplos == "no" || Multiplos == "No")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "Si" || Multiplos == "si")
						{
							cout << "Tu numero es 21" << endl;
						}
					}
				}

				else if (Multiplos == "No" || Multiplos == "no")
				{
					cout << "Tu numero esta entre el 14 y 24" << endl;
					cout << "Tu numero es mayor a 17?" << endl;
					cin >> Multiplos;
					if (Multiplos == "Si" || Multiplos == "si")
					{
						cout << "Tu numero es 19?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "no" || Multiplos == "No")
						{
							cout << "Tu numero es 23?" << endl;
							cin >> Multiplos;
							if (Multiplos == "no" || Multiplos == "No")
							{
								cout << "Tu numero es 24" << endl;
							}
							else if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}

						}
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 17?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "no" || Multiplos == "No")
						{
							cout << "Tu numero es 16?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "no" || Multiplos == "No")
							{
								cout << "Tu numero es 14" << endl;
							}
						}
					}
				}
			}
			if (Multiplos == "Si" || Multiplos == "si")
			{
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es mayor a 4?" << endl;
					cin >> Multiplos;
					if (Multiplos == "Si" || Multiplos == "si")
					{
						cout << "Tu numero es 7?" << endl;
						cin >> Multiplos;
						if (Multiplos == "Si" || Multiplos == "si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "no" || Multiplos == "No")
						{
							cout << "Tu numero es 11?" << endl;
							cin >> Multiplos;
							if (Multiplos == "Si" || Multiplos == "si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "no" || Multiplos == "No")
							{
								cout << "Tu numero es 13" << endl;
							}

						}
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 4?" << endl;
						cin >> Multiplos;
						if (Multiplos == "Si" || Multiplos == "si")
						{
							cout << "Yay" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 2?" << endl;
							cin >> Multiplos;
							if (Multiplos == "Si" || Multiplos == "si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "no" || Multiplos == "No")
							{
								cout << "Tu numero es 1" << endl;
							}
						}
					}
				}
				else if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es mayor a 9?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 12" << endl;

					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						if (Multiplos == "no" || Multiplos == "No")
						{
							cout << "Tu numero es 9?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "no" || Multiplos == "No")
							{
								cout << "Tu numero es 6?" << endl;
								cin >> Multiplos;
								if (Multiplos == "si" || Multiplos == "Si")
								{

									cout << "Fin" << endl;
								}
								else if (Multiplos == "no" || Multiplos == "No")
								{
									cout << "Tu numero es 3" << endl;
								}
							}
						}
					}


				}

			}

		}
	}
	else if (Numeros3.back() == 50)
	{
		cout << "Tu numero es multiplo de 5?" << endl;
		cin >> Multiplos;
		if (Multiplos == "si" || Multiplos == "Si")
		{
			cout << "Tu numero es mayor a 40?" << endl;
			cin >> Multiplos;
			if (Multiplos == "si" || Multiplos == "Si")
			{
				cout << "Tu numero es 45?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Fin" << endl;
				}
				else if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es 50" << endl;
				}
			}
			else if (Multiplos == "no" || Multiplos == "No")
			{
				cout << "Tu numero es 40?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Fin" << endl;
				}
				else if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es 35?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;

					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 30" << endl;
					}
				}

			}
		}
		else if (Multiplos == "no" || Multiplos == "No")
		{
			cout << "Tu numero esta entre el 26 y 37?" << endl;
			cin >> Multiplos;
			if (Multiplos == "si" || Multiplos == "Si")
			{
				cout << "Tu numero es mayor a 29?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es un multiplo de 3?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 36" << endl;
					}
					else if (Multiplos == "No" || Multiplos == "no")
					{
						cout << "Tu numero es 32?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 34?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 37" << endl;
							}
						}
					}

				}
				else if (Multiplos == "no" || Multiplos == "No")//esto es por si el numero es menor a 29
				{
					cout << "Tu numero es multiplo de 3?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 21?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 18" << endl;
						}
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 29?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin";
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 28?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 26" << endl;
							}
						}
					}
				}
			}
			else if (Multiplos == "no" || Multiplos == "No")//este else if es para el 38 hasta 49
			{
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es mayor a 45?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 48" << endl;
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 42?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 39" << endl;
						}
					}
				}
				else if (Multiplos == "No" || Multiplos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 44?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 46?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 47?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 49" << endl;
							}
						}

					}
					else if (Multiplos == "no" || Multiplos == "No")//Menor a 44
					{
						cout << "Tu numero es 44?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin";
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 43?\n";
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 41?" << endl;
								cin >> Multiplos;
								if (Multiplos == "si" || Multiplos == "Si")
								{
									cout << "Fin" << endl;
								}
								else if (Multiplos == "No" || Multiplos == "no")
								{
									cout << "Tu numero es 38" << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	else if (Numeros3.back() == 75)
	{
		cout << "Tu numero es multiplo de 5?" << endl;//Multiplos de 5
		cin >> Multiplos;
		if (Multiplos == "si" || Multiplos == "Si")
		{
			cout << "Tu numero es mayor a 65?" << endl;
			cin >> Multiplos;
			if (Multiplos == "si" || Multiplos == "Si")
			{
				cout << "Tu numero es 70?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Fin" << endl;
				}
				else if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es 75" << endl;
				}
			}
			else if (Multiplos == "no" || Multiplos == "No")
			{
				cout << "Tu numero es 40?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Fin" << endl;
				}
				else if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es 60?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;

					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 55" << endl;
					}
				}

			}
		}
		else if (Multiplos == "no" || Multiplos == "No")//52 62
		{
			cout << "Tu numero esta entre el 52 y 62?" << endl;
			cin >> Multiplos;
			if (Multiplos == "si" || Multiplos == "Si")
			{
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es 51?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;
					}
					else if (Multiplos == "No" || Multiplos == "no")
					{
						cout << "Tu numero es 54?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 51" << endl;
						}
					}

				}
				else if (Multiplos == "no" || Multiplos == "No")//Por si no es multiplo de 3 pero su esta ewntre e; 52 y 62
				{
					cout << "Tu numero es mayor a 58?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 59?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 61?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 62" << endl;
							}
						}
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 58?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 56?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 53?" << endl;
								cin >> Multiplos;
								if (Multiplos == "si" || Multiplos == "Si")
								{
									cout << "Fin" << endl;
								}
								else if (Multiplos == "No" || Multiplos == "no")
								{
									cout << "Tu numero es 52" << endl;
								}
							}
						}
					}
				}
			}
			else if (Multiplos == "no" || Multiplos == "No")//Acuerdate que este else if es para el 64 hasta 74 
			{
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es mayor a 69?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 72" << endl;
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 69?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 66?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 63" << endl;
							}
						}
					}
				}
				else if (Multiplos == "No" || Multiplos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 68?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 71?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 73?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 74" << endl;
							}
						}

					}
					else if (Multiplos == "no" || Multiplos == "No")//Menor a 44
					{
						cout << "Tu numero es 68?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 64" << endl;
						}
					}
				}
			}
		}
	}
	else if (Numeros3.back() == 100)
	{
		cout << "Tu numero es multiplo de 5?" << endl;//Multiplos de 5
		cin >> Multiplos;
		if (Multiplos == "si" || Multiplos == "Si")
		{
			cout << "Tu numero es mayor a 90?" << endl;
			cin >> Multiplos;
			if (Multiplos == "si" || Multiplos == "Si")
			{
				cout << "Tu numero es 95?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Fin" << endl;
				}
				else if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es 100" << endl;
				}
			}
			else if (Multiplos == "no" || Multiplos == "No")
			{
				cout << "Tu numero es 90?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Fin";
				}
				else if (Multiplos == "no" || Multiplos == "No")
				{
					cout << "Tu numero es 85?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;

					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 80" << endl;
					}
				}

			}
		}
		else if (Multiplos == "no" || Multiplos == "No")//76 86 
		{
			cout << "Tu numero esta entre el 76 y 86?" << endl;
			cin >> Multiplos;
			if (Multiplos == "si" || Multiplos == "Si")
			{
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es mayor a 84?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 87" << endl;
					}
					else if (Multiplos == "No" || Multiplos == "no")
					{
						cout << "Tu numero es 84?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 81?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "no" || Multiplos == "No")
							{
								cout << "Tu numero es 78" << endl;
							}
						}
					}

				}
				else if (Multiplos == "no" || Multiplos == "No")//Por si no es multiplo de 3 pero su esta ewntre e; 76 y 86
				{
					cout << "Tu numero es mayor a 79?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						{
							cout << "Tu numero es 82?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 83?" << endl;
								cin >> Multiplos;
								if (Multiplos == "si" || Multiplos == "Si")
								{
									cout << "Fin" << endl;
								}
								else if (Multiplos == "No" || Multiplos == "no")
								{
									cout << "Tu numero es 86" << endl;
								}
							}
						}
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 79?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 77?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 76" << endl;
							}
						}
					}

				}
			}
			else if (Multiplos == "no" || Multiplos == "No")//Acuerdate que este else if es para el 88 hasta 98
			{
				cout << "Tu numero es multiplo de 3?" << endl;
				cin >> Multiplos;
				if (Multiplos == "si" || Multiplos == "Si")
				{
					cout << "Tu numero es 93?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;
					}
					else if (Multiplos == "no" || Multiplos == "No")
					{
						cout << "Tu numero es 96?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 99" << endl;
						}
					}
				}
				else if (Multiplos == "No" || Multiplos == "no")//Por si no es multiplo de 3
				{
					cout << "Tu numero es mayor a 92?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Tu numero es 94?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "No" || Multiplos == "no")
						{
							cout << "Tu numero es 97?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es 98" << endl;
							}
						}

					}



				}
				else if (Multiplos == "no" || Multiplos == "No")//Menor a 44
				{
					cout << "Tu numero es 92?" << endl;
					cin >> Multiplos;
					if (Multiplos == "si" || Multiplos == "Si")
					{
						cout << "Fin" << endl;
					}
					else if (Multiplos == "No" || Multiplos == "no")
					{
						cout << "Tu numero es 91?" << endl;
						cin >> Multiplos;
						if (Multiplos == "si" || Multiplos == "Si")
						{
							cout << "Fin" << endl;
						}
						else if (Multiplos == "no" || Multiplos == "No")
						{
							cout << "Tu numero es el 89?" << endl;
							cin >> Multiplos;
							if (Multiplos == "si" || Multiplos == "Si")
							{
								cout << "Fin" << endl;
							}
							else if (Multiplos == "No" || Multiplos == "no")
							{
								cout << "Tu numero es el 88" << endl;
							}
						}
					}
				}
			}
		}
	}
}

void Ejercicio4()
{
	double Val1;
	double Val2;
	char Operador;
	cout << "Ingrese un numero" << endl;
	cin >> Val1;
	cout << "Ingresa otro numero" << endl;
	cin >> Val2;
	cout << "Ingrese un operador, +, -, *, /." << endl;
	cin >> Operador;
	switch (Operador)
	{
	case '+':
		cout << "Su resultado es: " << Val1 + Val2 << endl;
		break;

	case '-':
		cout << "Su resultado es: " << Val1 - Val2 << endl;
		break;

	case '*':
		cout << "Su resultado es: " << Val1 * Val2 << endl;
		break;

	case '/':
		cout << "Su resultado es: " << Val1 / Val2 << endl;
		break;

	default:
		cout << "Ese operador no esta permitido";
	}

}

void Ejercicio5()
{
	vector <string> Numeros = { "cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve" };
	int Valor;
	cout << "Ingrese un numero del 0 al 9 y mostraremos como se escribe:" << endl;
	cin >> Valor;
	switch (Valor)
	{
	case 0:
		cout << "0 se escriibe: " << Numeros[0];
		break;
	case 1:
		cout << "1 se escriibe: " << Numeros[1];
		break;
	case 2:
		cout << "2 se escriibe: " << Numeros[2];
		break;
	case 3:
		cout << "0 se escriibe: " << Numeros[3];
		break;
	case 4:
		cout << "0 se escriibe: " << Numeros[4];
		break;
	case 5:
		cout << "5 se escriibe: " << Numeros[5];
		break;
	case 6:
		cout << "0 se escriibe: " << Numeros[6];
		break;
	case 7:
		cout << " se escriibe: " << Numeros[7];
		break;
	case 8:
		cout << "0 se escriibe: " << Numeros[8];
		break;
	case 9:
		cout << "0 se escriibe: " << Numeros[9];
		break;

	default:
		cout << "Ese numero esta fuera del limite" << endl;
		break;
	}
}

void Ejercicio6()
{
	vector <int> Numeros = { 0,1,2,3,4,5,6,7,8,9 };
	char Val1;
	char Val2;
	int Num1;
	int Num2;
	char Operador;
	cout << "ingrese la incial del nombre del numero, c(cero),u(uno),d(dos),t(tres),f(Cuatro),e(cinco),s(seis),v(siete),o(ocho),n(nueve)" << endl;
	cin >> Val1;
	cout << "ingrese la incial del nombre del numero, c(cero),u(uno),d(dos),t(tres),f(Cuatro),e(cinco),s(seis),v(siete),o(ocho),n(nueve)" << endl;
	cin >> Val2;
	cout << "Ingrese un operador, +, -, *, /." << endl;
	cin >> Operador;
	switch (Val1)
	{
	case 'c':
		Num1 = 0;
		break;

	case 'u':
		Num1 = 1;
		break;

	case 'd':
		Num1 = 2;
		break;

	case 't':
		Num1 = 3;
		break;
	case 'f':
		Num1 = 4;
		break;
	case 'e':
		Num1 = 5;
		break;
	case 's':
		Num1 = 6;
		break;
	case 'v':
		Num1 = 7;
		break;
	case 'o':
		Num1 = 8;
		break;
	case 'n':
		Num1 = 9;
		break;
	default:
		cout << "Esa letra no es valida";
		break;
	}
	switch (Val2)
	{
	case 'c':
		Num2 = 0;
		break;

	case 'u':
		Num2 = 1;
		break;

	case 'd':
		Num2 = 2;
		break;

	case 't':
		Num2 = 3;
		break;
	case 'f':
		Num2 = 4;
		break;
	case 'e':
		Num2 = 5;
		break;
	case 's':
		Num2 = 6;
		break;
	case 'v':
		Num2 = 7;
		break;
	case 'o':
		Num2 = 8;
		break;
	case 'n':
		Num2 = 9;
		break;
	default:
		cout << "Esa letra no es valida";
		break;
	}

	switch (Operador)
	{
	case '+':
		cout << "Su resultado es: " << Num1 + Num2 << endl;
		break;

	case '-':
		cout << "Su resultado es: " << Num1 - Num2 << endl;
		break;

	case '*':
		cout << "Su resultado es: " << Num1 * Num2 << endl;
		break;

	case '/':
		cout << "Su resultado es: " << Num1 / Num2 << endl;
		break;
	}
}

void Ejercicio7()
{
	int Arroz=1;
	int Cuadros=1;
	while (Arroz<1000)
	{
		Arroz = Arroz + Arroz;
		Cuadros = Cuadros + 1;
	}
	cout << "Los cuadros necesarios para darle menos de 1000 de arroz al inventor son: " << Cuadros-1 << endl;
	cout << "Arroz total: " << Arroz/2 << endl;
	
	Arroz = 1;
	Cuadros = 1;
	while (Arroz < 1000000)
	{
		Arroz = Arroz + Arroz;
		Cuadros = Cuadros + 1;
	}
	cout << "Los cuadros necesarios para darle menos de 1000000 de arroz al inventor son: " << Cuadros-1 << endl;
	cout << "Arroz total: " << Arroz/2 << endl;

	Arroz = 1;
	Cuadros = 1;
	while (Arroz < 1000000000)
	{
		Arroz = Arroz + Arroz;
		Cuadros = Cuadros + 1;
	}
	cout << "Los cuadros necesarios para darle menos de 1000000000 de arroz al inventor son: " << Cuadros-1 << endl;
	cout << "Arroz total: " << Arroz/2 << endl;
}

void Ejercicio8()
{
	int Arroz = 1;
	int Cuadros = 1;
	while (Cuadros <= 64)
	{
		Arroz = Arroz + Arroz;
		Cuadros = Cuadros + 1;
	}
	cout << "Los cuadros necesarios para darle menos de 1000 de arroz al inventor son: " << Cuadros - 1 << endl;
	cout << "Arroz total: " << Arroz / 2 << endl;
	// solo llega hasta el cuadro 31, en el 32 comineza con numeros negativos y del 33 en adelante da 0
}

void Ejercicio9()
{
	vector<int>Numeros = { 1,2,3 };
	int Eleccion;
	int Azar;
	cout << "Elije 1 para piedra, 2 para papel y 3 para tijeras" << endl;
	cin >> Eleccion;

	switch (Eleccion)
	{
	case 1:
		cout << "Jugador uno jugo piedra" << endl;
		Azar = Numeros[3];
		break;

	case 2:
		cout << "Jugador uno jugo papel" << endl;
		Azar = Numeros[1];
		break;

	case 3:
		cout << "Jugador uno eligio tijera" << endl;
		Azar = Numeros[2];
		break;

	default:
		cout << "Ese no es una opcion";
	}

	switch (Azar)
	{
	case 1:
		cout << "Maquina jugo piedra" << endl;
		Azar = Numeros[3];
		break;

	case 2:
		cout << "Maquina jugo papel" << endl;
		Azar = Numeros[1];
		break;

	case 3:
		cout << "Maquina eligio tijera" << endl;
		Azar = Numeros[2];
		break;
	}
	if (Eleccion == 1 && Azar == 3)
	{
		cout << "Gano Jugador1" << endl;
	}
	if (Eleccion == 2 && Azar == 1)
	{
		cout << "Gano Jugador1" << endl;
	}
	if (Eleccion == 3 && Azar == 2)
	{
		cout << "Gano Jugador1" << endl;
	}

}

void Ejercicio10()
{
	int Posicion=1;
	int Inicio = 1;
	int Valor = 1;
	int Temp;
	int Temp2;
	int Contador=0;
	vector<int>Primos;

	while (Inicio<100)
	{
		Contador = 0;
		Inicio = Inicio + 1;
		Valor = Valor + 1;
		Temp2 = Inicio;
		Temp = Valor;

		while (Inicio>=1)
		{
			if (Valor%Inicio == 0)
			{
				Contador = Contador + 1;
			}

			if (Contador == 3)
			{
				break;
			}

			Inicio = Inicio - 1;
		}
		if (Contador == 2)
		{
			Primos.push_back(Valor);
		}
		
		Inicio = Temp2;

	}

	cout << "Estos son los numeros primos que se encuentran entre el 1 y el 100: " << endl;
	for (int i = 0; i < Primos.size(); i++)
	{
		cout << Posicion << ":" << '\t' << Primos[i] << endl;
		Posicion = Posicion + 1;
	}
}

void Ejercicio11()
{
	int Posicion = 1;
	int Inicio = 1;
	int Valor = 1;
	int Temp;
	int Temp2;
	int Contador = 0;
	int Limite;
	vector<int>Primos;
	cout << "Hasta que numero quieres que se busque cuales son primos:" << endl;
	cin >> Limite;

	while (Inicio < Limite)
	{
		Contador = 0;
		Inicio = Inicio + 1;
		Valor = Valor + 1;
		Temp2 = Inicio;
		Temp = Valor;

		while (Inicio >= 1)
		{
			if (Valor%Inicio == 0)
			{
				Contador = Contador + 1;
			}

			if (Contador == 3)
			{
				break;
			}

			Inicio = Inicio - 1;
		}
		if (Contador == 2)
		{
			Primos.push_back(Valor);
		}

		Inicio = Temp2;

	}

	cout << "Estos son los numeros primos que se encuentran entre el 1 y "<< Limite << " son:" << endl;
	for (int i = 0; i < Primos.size(); i++)
	{
		cout << Posicion << ":" << '\t' << Primos[i] << endl;
		Posicion = Posicion + 1;
	}
}

void Ejercicio12()
{
	bool A[100];
	for (int i = 1; i < 100; i++)
		A[i] = true;

	for (int i = 2; i < sqrt(100); i++)
	{
		if (A[i] == true)
		{
			for (int j = i * i; j < 100; j += i)
			{
				A[j] = false;
			}
		}
	}
	cout << "Los numeros primos que estan antes del " << 100 << " son:" << endl;
	for (int i = 1; i < 100; i++)
	{
		if (A[i] == true)
		{
			cout << i << endl;
		}
	}
}

void Ejercicio13()
{
	bool A[100];
	int Limite;
	cout << "Por favor ingrese hasta que numero quiere que saquemos lon nueros binarios:" << endl;
	cin >> Limite;
	for (int i = 1; i < Limite; i++)
		A[i] = true;

	for (int i = 2; i < sqrt(Limite); i++)
	{
		if (A[i] == true)
		{
			for (int j = i * i; j < Limite; j += i)
			{
				A[j] = false;
			}
		}
	}
	cout << "Los numeros primos que estan antes del " << Limite << " son:" << endl;
	for (int i = 1; i < Limite; i++)
	{
		if (A[i] == true)
		{
			cout << i << endl;
		}
	}
}

void Ejercicio14()
{
	int Posicion = 1;
	int Inicio = 1;
	int Valor = 1;
	int Temp;
	int Temp2;
	int Contador = 0;
	int Limite;
	cout << "Hasta que numero quieres que se busque cuales son primos:" << endl;
	cin >> Limite;

	while (Inicio < Limite)
	{
		Contador = 0;
		Inicio = Inicio + 1;
		Valor = Valor + 1;
		Temp2 = Inicio;
		Temp = Valor;

		while (Inicio >= 1)
		{
			if (Valor%Inicio == 0)
			{
				Contador = Contador + 1;
			}

			if (Contador == 3)
			{
				break;
			}

			Inicio = Inicio - 1;
		}
		Inicio = Temp2;
		cout << Posicion << ":" << '\t' << Valor << endl;
		Posicion = Posicion + 1;

	}
}

void Moda(int Repeticion, int Valor)
{
	vector<int> Valores = { 4,5,5,6,8,7,5,6,2,0,3,5,7,5 };
	cout << "El vector es:" << endl;
	for (int i = 0; i < Valores.size(); i++)
		cout << Valores[i] << endl;
	cout << "La moda en el vector es: " << Valor << " se repite " << Repeticion << endl;
}

int Verificar(int Numero)
{
	vector<int> Valores = { 4,5,5,6,8,7,5,6,2,0,3,5,7,5 };
	int x = 0;
	for (int i = 0; i < Valores.size(); i++)
	{
		if (Numero == Valores[i])
		{
			x = x + 1;
		}
	}
	return x;
}

void Ejercicio15()
{
	vector<int> Valores = {4,5,5,6,8,7,5,6,2,0,3,5,7,5};
	int Numero = 0;
	int Valor = 0;
	int Repeticion = 0;
	for (int i = 0; i < Valores.size(); i++)
	{
		Numero = Valores[i];
		if (Repeticion <= Verificar(Numero))
		{
			Repeticion = Verificar(Numero);
			Valor = Valores[i];
		}
	}
	Moda(Repeticion, Valor);
}

void Ejercicio16()
{
	string Pal1;
	string Pal2;
	string Pal3;
	string Temp;
	cout << "Ingresa una palabra" << endl;
	cin >> Pal1;
	cout << "Ingresa una palabra" << endl;
	cin >> Pal2;
	cout << "Ingresa una palabra" << endl;
	cin >> Pal3;

	if (Pal1 > Pal2)
	{
		Temp = Pal1;
		Pal1 = Pal2;
		Pal2 = Temp;

	}

	if (Pal1 > Pal3)
	{
		Temp = Pal1;
		Pal1 = Pal3;
		Pal3 = Temp;
	}

	if (Pal2 > Pal3)
	{
		Temp = Pal2;
		Pal2 = Pal3;
		Pal3 = Temp;
	}
	cout << "Ordenadas del menor a mayor" << endl;
	cout << Pal1 << " ," << Pal2 << " ," << Pal3 << endl;
	cout << "La palabra menor es: " << Pal1;
	cout << "La palabra mayor es: " << Pal2;
}

void Ejercicio17()
{
	int a;
	int b;
	int c;
	double Resultado;
	double Resultado2;
	cout << "Vamos a resolver una ecuacion de ax2+bx+c" << endl;
	cout << "Ingrese el valor de a:" << endl;
	cin >> a;
	cout << "Ingrese el valor de b:" << endl;
	cin >> b;
	cout << "Ingrese el valor de c:" << endl;
	cin >> c;

	//resolviendo 
	Resultado = sqrt(a);
	Resultado2 = sqrt(c);
	cout << "El resutado es: " << "(" << Resultado << "x " << "*" << Resultado2 << ")" << 2 << endl;

}

void Ejercicio18()
{
	vector<string> Name;
	vector<int>score;
	string Nombre;
	string Eleccion;
	int Edad;
	
	while (true)
	{
		cout << "Ingrese su nombre segido de su edad, ejemplo Alan 5" << endl;
		cout << "si quiere salir escriba NoName 0" << endl;
		cin >> Nombre >> Edad;

		if (Nombre == "NoName" && Edad == 0)
		{

			for (int i = 0; i < Name.size(); i++)
				cout << Name[i]<<"\t"<< score[i] << endl;

			return;
		}

		Name.push_back(Nombre);
		score.push_back(Edad);

	}

	cin.ignore();
	cin.get();
}

int main()
{
	int Eleccion;
	cout << "Ingrese un numero dependiendo del programa que quiera ver elige del 1 al 25:" << endl;
	cin >> Eleccion;

	switch (Eleccion)
	{
	case 1:
		Try1();
		break;

	case 2:
		Try2();
		break;

	case 3:
		Try3();
		break;

	case 4:
		Try4();
		break;

	case 5:
		Try5();
		break;

	case 6:
		Try6();
		break;

	case 7:
		Drill();
		break;

	case 8:
		Ejercicio1();
		break;

	case 9:
		Ejercicio2();
		break;

	case 10:
		Ejercicio3();
		break;

	case 11:
		Ejercicio4();
		break;

	case 12:
		Ejercicio5();
		break;

	case 13:
		Ejercicio6();
		break;

	case 14:
		Ejercicio7();
		break;

	case 15:
		Ejercicio8();
		break;

	case 16:
		Ejercicio9();
		break;

	case 17:
		Ejercicio10();
		break;

	case 18:
		Ejercicio11();
		break;

	case 19:
		Ejercicio12();
		break;

	case 20:
		Ejercicio13();
		break;

	case 21:
		Ejercicio14();
		break;

	case 22:
		Ejercicio15();
		break;

	case 23:
		Ejercicio16();
		break;

	case 24:
		Ejercicio17();
		break;

	case 25:
		Ejercicio18();
		break;
	}


	cin.ignore();
	cin.get();
	return 0;
}
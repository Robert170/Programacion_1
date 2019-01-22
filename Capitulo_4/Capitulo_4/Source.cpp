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
		sum += x;
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
	char Eleccion;
	int Largo = 51;
	vector<int> Menor = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49 };
	vector<int> Mayor = { 50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100 };
	cout << "Piense en un numero del 1 al 100, no haga trampa" << endl;
	cout << "Tu numero es mayor o igual a 50? y/n" << endl; //1
	cin >> Eleccion;
	if (Eleccion == 'y')
	{
		for (int i = 0;  i<Mayor.size();++i)
		{
			if (Mayor[i] < 90)
			{
				
			}
		}
		for (int i = 0; i < Mayor.size(); i++)
			cout << Mayor[i] << endl;
	}
	if (Eleccion == 'n')
	{

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
	int Edad;
	
	while (true)
	{
		cout << "Ingrese su nombre segido de su edad, ejemplo Alan 5, si quiere salir escriba NoName 0" << endl;
		cin >> Nombre >> Edad;

		Name.push_back(Nombre);
		score.push_back(Edad);

		if (Nombre == "NoName" && Edad == 0)
		{
			return;
		}
	
	}
	
}

int main()
{
	int Eleccion;
	cout << "Ingrese un numero dependiendo del programa que quiera ver:" << endl;
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

	case 26:
		Ejercicio10();
		break;

	case 27:
		Ejercicio10();
		break;
	}


	cin.ignore();
	cin.get();
	return 0;
}
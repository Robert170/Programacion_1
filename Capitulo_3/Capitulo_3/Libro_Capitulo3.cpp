#include "Includes.h"

void Try1()
{
	double Meses;
	double Edad;
	string Nombre;

	cout << "Porfavor ingrese su nombre:" << endl;
	cin >> Nombre; // read two strings
	cin.ignore();
	cin.get();
	cout << "Porfavor ingrese su edad: " << endl;
	cin >> Edad;
	cin.ignore();
	cin.get();
	Meses = Edad * 12;
	cout << "Hola " << Nombre << " " << "edad:" << Edad << endl;
	cout << "Su edad en meses es de: " << Meses;

	cin.ignore();
	cin.get();
}


int Try2()
{
	cout << "Ingrese un numero entero: ";
	int Valor;
	cin >> Valor;
	double Decimal = Valor;
	cout << "Su Valor es == " << Valor
		<< "\n Su Valor+1 es == " << Valor + 1
		<< "\n Tres veces su valor es == " << 3 * Valor
		<< "\n Su valor mas si mismo es == " << Valor + Valor
		<< "\n Su Valor al cuadrado es == " << Valor * Valor
		<< "\n La mitad de su valor es  == " << Decimal / 2
		<< "\n La raiz cuadrada de su valor es == " << sqrt(Decimal)
		<< "\n El residuo de su vloar entre 2 es == " << Valor%2
		<< '\n'; // name for newline (“end of line”) in output
	return 0;
}

int Try3()
{
	int number_of_words = 0;
	string previous = " ";  
	string current; 
	cout << "Ingrese su frase: " << endl;
	while (cin >> current)
	{ 
		number_of_words = number_of_words + 1;
		if (previous == current)
		{
			cout << "La palabra repetida es la numero: " << number_of_words << endl;
			cout << "Palabra repetida: " << current << '\n';
		}
		previous = current;
	}
	cin.ignore();
	cin.get();
	return 0;
}

int Try4()
{
	string s = "Goodbye, cruel world! "; // el eroor era que string estaba escrito como STRING
	cout << s << '\n'; // error cout estaba escrito cOut y la variable s estaba en mayusculas "S"
	return 0;
}

int Try5()
{
	double d = 0;

	while (cin >> d)
	{ // repeat the statements below
	// as long as we type in numbers
		int i = d; // try to squeeze a double into an int
		char c = i; // try to squeeze an int into a char
		int i2 = c; // get the integer value of the character
		cout<< "d==" << d // the original double
			<< "i==" << i // converted to int
			<< "i2==" << i2 // int value of char
			<< "char(" << c << ")\n"; // the char
	}
	return 0;
}

int Ejercicio1()
{
	cout << "Ingrese el nombre de la persona a la que desea escribir:\n";
	string Nombre;
	cin >> Nombre; // read two strings
	cout << "Estimado " << Nombre << '\n';
	cout << "¿Como has estado? yo me encuentro muy bien, espero que no hayas olvidado lo que me debes." << endl;
	cout << "Por ahora me encuentro trabajando en un libro que me encargaron y espero que te la estes pasando mejor que yo." << endl;
	cout << "Por ahora me despido y espero que nos veamos pronto." << endl;
	string Amigo;
	cout << "Escribe el nombre de un amigo:" << endl;
	cin >> Amigo;
	cout << "¿Has visto a " << Amigo << " ultimamente?" << endl;
	char friend_sex = 0;
	cout << "¿Tu amigo es hombre o mujer?, por favor espefifiquelo con m para hombre y f para mujer:" << endl;
	cin >> friend_sex;
	if (friend_sex == 'm' || friend_sex == 'M')
	{
		cout << "Si ves a " << Amigo << " pídele que me llame" << endl;
	}
	if (friend_sex == 'f' || friend_sex == 'F')
	{
		cout << "Si ves a " << Amigo << " has que me llame, porfavor" << endl;
	}
	int Edad;
	cout << "¿Que edad tiene su amigo?" << endl;
	cin >> Edad;
	if (Edad <= 0 || Edad >= 110)
	{
		cout << "Si claro, que gracioso, escribe su edad real:" << endl;
		cin >> Edad;
	}
	if (Edad < 12)
	{
		Edad = Edad + 1;
		cout << "El proximo año cumple " << Edad << " años" << endl;
	}
	if (Edad == 17)
	{
		cout << "El año que viene podrás votar" << endl;
	}
	if (Edad >= 70)
	{
		cout << "Espero que esté disfrutando de su jubilación" << endl;
	}
	string Firma;
	cout << "Escriba su nombre" << endl;
	cin >> Firma;
	cout << "Atentamente " << Firma << endl;
	cin.ignore();
	cin.get();
	return 0;
}

int Ejercicio2()
{
	double Millas;
	cout << "Por favor ingrese el numero de millas que quiera convertir a kilometros:" << endl;
	cin >> Millas;
	double Kilometros;
	Kilometros = Millas * 1.609;
	cout << Millas << " millas es igual a " << Kilometros << " kilometros" << endl;
	cin.ignore();
	cin.get();
	return 0;
}

int Ejercicio3()
{
	int string;
	//int double = 0;
	//string int;
	//String char;
	String x;
	return 0;
}

int Ejercicio4()
{
	int Val1;
	int Val2;
	cout << "Ingrese un numero:" << endl;
	cin >> Val1;
	cout << "Ingrese otro numero:" << endl;
	cin >> Val2;
	if (Val1 > Val2)
	{
		cout << Val1 << " es mayor a " << Val2 << endl;
		cout << Val2 << " es menor a " << Val1 << endl;
	}

	if (Val2 > Val1)
	{
		cout << Val2 << " es mayor a " << Val1 << endl;
		cout << Val1 << " es menor a " << Val2 << endl;
	}

	cout << "La suma de sus valores es:" << Val1 + Val2 << endl;
	cout << "La diferencia de sus valores es:" << Val1 - Val2 << endl;
	cout << "El producto de sus valores es:" << Val1 * Val2 << endl;
	cout << "Los valores divididos dan:" << Val1 / Val2 << endl;

	return 0;
}

int Ejercicio5()
{
	double Val1;
	double Val2;
	cout << "Ingrese un numero:" << endl;
	cin >> Val1;
	cout << "Ingrese otro numero:" << endl;
	cin >> Val2;
	if (Val1 > Val2)
	{
		cout << Val1 << " es mayor a " << Val2 << endl;
		cout << Val2 << " es menor a " << Val1 << endl;
	}

	if (Val2 > Val1)
	{
		cout << Val2 << " es mayor a " << Val1 << endl;
		cout << Val1 << " es menor a " << Val2 << endl;
	}

	cout << "La suma de sus valores es:" << Val1 + Val2 << endl;
	cout << "La diferencia de sus valores es:" << Val1 - Val2 << endl;
	cout << "El producto de sus valores es:" << Val1 * Val2 << endl;
	cout << "Los valores divididos dan:" << Val1 / Val2 << endl;

	return 0;
}

int Ejercicio6()
{
	int Val1;
	int Val2;
	int Val3;
	int Temp;
	cout << "Ingrese un numero:" << endl;
	cin >> Val1;
	cout << "Ingrese otro numero:" << endl;
	cin >> Val2;
	cout << "Ingrese otro numero:" << endl;
	cin >> Val3;
	if (Val1 > Val2)
	{
		Temp = Val1;
		Val1 = Val2;
		Val2 = Temp;
	}

	if (Val1 > Val3)
	{
		Temp = Val1;
		Val1 = Val3;
		Val3 = Temp;
	}

	if (Val2 > Val3)
	{
		Temp = Val2;
		Val2 = Val3;
		Val3 = Temp;
	}

	cout << Val1 << "," << Val2 << "," << Val3;
	return 0;
}

int Ejercicio7()
{
	string Val1;
	string  Val2;
	string  Val3;
	string  Temp;
	cout << "Ingrese una palabra:" << endl;
	cin >> Val1;
	cout << "Ingrese otra palabra:" << endl;
	cin >> Val2;
	cout << "Ingrese otra palabra:" << endl;
	cin >> Val3;
	if (Val1 > Val2)
	{
		Temp = Val1;
		Val1 = Val2;
		Val2 = Temp;
	}

	if (Val1 > Val3)
	{
		Temp = Val1;
		Val1 = Val3;
		Val3 = Temp;
	}

	if (Val2 > Val3)
	{
		Temp = Val2;
		Val2 = Val3;
		Val3 = Temp;
	}

	cout << Val1 << "," << Val2 << "," << Val3;
	return 0;
}

int Ejercicio8()
{
	cout << "Ingrese un numero y le diremos si es par o no:" << endl;
	int Valor;
	cin >> Valor;
	if (Valor%2==0)
	{
		cout << "Es par" << endl;
	}
	else
	{
		cout << "No es par" << endl;
	}
		
	return 0;
}

int Ejercicio9()
{
	string Numero;
	cout << "Escribe el nombre de tu numero del 0 al 4:" << endl;
	cin >> Numero;
	if (Numero == "cero" || Numero == "Cero")
	{
		cout << 0 << endl;
	}

	if (Numero == "uno" || Numero == "Uno")
	{
		cout << 1 << endl;
	}


	if (Numero == "dos" || Numero == "Dos")
	{
		cout << 2 << endl;
	}


	if (Numero == "tres" || Numero == "Tres")
	{
		cout << 3 << endl;
	}

	if (Numero == "cuatro" || Numero == "Cuatro")
	{
		cout << 4 << endl;
	}
	return 0;
}

int Ejercicio10()
{
	string Operador;
	int Val1;
	int Val2;
	cout << "Esribe el operador" << endl;
	cin >> Operador;
	cout << "Escriba un valor:" << endl;
	cin >> Val1;
	cout << "Escriba otro valor:" << endl;
	cin >> Val2;
	if (Operador == "+")
	{
		cout << Val1 << "+" << Val2 << "=" << Val1 + Val2 << endl;
	}

	if (Operador == "-")
	{
		cout << Val1 << "-" << Val2 << "=" << Val1 - Val2 << endl;
	}

	if (Operador == "/")
	{
		cout << Val1 << "/" << Val2 << "=" << Val1 / Val2 << endl;
	}

	if (Operador == "*")
	{
		cout << Val1 << "*" << Val2 << "=" << Val1 * Val2 << endl;
	}
	return 0;
}

int Ejercicio11()
{
	int Penny; // 1 centavo
	int Nickel;//5 centavos
	int Dimes;//10 centavos
	int Quarters;// 25 centavos
	int Half; //50 centavos
	int Dolar;//100 centavos
	cout << "Cuantos pennys tienes?" << endl;
	cin >> Penny;
	cout << "Cuantos Nickel tienes?" << endl;
	cin >> Nickel;
	cout << "Cuantos Dimes tienes?" << endl;
	cin >> Dimes;
	cout << "Cuantos Cuartos de dolar tienes?" << endl;
	cin >> Quarters;
	cout << "Cuantos medio dolar tienes?" << endl;
	cin >> Half;
	cout << "Cuantos dolares tienes?" << endl;
	cin >> Dolar;
	double Total = Penny + (Nickel * 5) + (Dimes * 10) + (Quarters * 25) + (Half * 50) + (Dolar * 100);
	cout << "Tienes un total de: " << Total << " centavos" << endl;
	cout << "O tambien tienes: " << "$"<< Total / 100 << " dolares" << endl;
	return 0;
}

int main()
{
	cout << "Escoja el numero del ejercicio del 1-16:\n";
	int Eleccion;
	cin >> Eleccion;

	if (Eleccion == 1)
	{
		Try1();
	}
	if (Eleccion == 2)
	{
		Try2();
	}
	if (Eleccion == 3)
	{
		Try3();
	}

	if (Eleccion == 4)
	{
		Try4();
	}

	if (Eleccion == 5)
	{
		Try5();
	}
	
	if (Eleccion == 6)
	{
		Ejercicio1();
	}

	if (Eleccion == 7)
	{
		Ejercicio2();
	}

	if (Eleccion == 8)
	{
		Ejercicio3();
	}

	if (Eleccion == 9)
	{
		Ejercicio4();
	}

	if (Eleccion == 10)
	{
		Ejercicio5();
	}

	if (Eleccion == 11)
	{
		Ejercicio6();
	}

	if (Eleccion == 12)
	{
		Ejercicio7();
	}

	if (Eleccion == 13)
	{
		Ejercicio8();
	}

	if (Eleccion == 14)
	{
		Ejercicio9();
	}

	if (Eleccion == 15)
	{
		Ejercicio10();
	}

	if (Eleccion == 16)
	{
		Ejercicio11();
	}


	cin.ignore();
	cin.get();
	return 0;
}
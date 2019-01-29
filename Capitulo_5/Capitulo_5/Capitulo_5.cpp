#include "Includes.h"


int area(int Largo, int Ancho)
{
	return Largo * Ancho;
}

int framed_area(int x, int y) 
{
	return area (x - 2, y - 2);
}

void Try1()
{
	//int s1 = area(7; // error: ) missing
	//int s2 = area(7) // error: ; missing
	//Int s3 = area(7); // error: Int is not a type
	//int s4 = area('7); // error: non-terminated character ( ' missing)
}

void Try2()
{
	//int x0 = arena(7); // error: undeclared function
	//int x1 = area(7); // error: wrong number of arguments
	//int x2 = area("seven", 2); // error: 1st argument has a wrong type
}

void Try3()
{
	int x;
	int y;
	int z;
	cout << "Ingrese el valor de x, y, z." << endl;
	cin >> x >> y >> z;
	int area1 = area(x, y);
	cout << "El area de x*y es: " << area1 << endl;
	if (area1 <= 0)
	{
		cout << "Valor negativo no es valido" << endl;
		return;
	}
	
	int area2 = framed_area(1, z);
	cout << "El area de (x-2)*(y-2) es: " << area2 << endl;
	if (area2 <= 0)
	{
		cout << "Valor negativo no es valido" << endl;
		return;
	}
	
	int area3 = framed_area(y, z);
	cout << "El area de (y-2)*(z-2) es: " << area3 << endl;
	if (area3 <= 0)
	{
		cout << "Valor negativo no es valido" << endl;
		return;;
	}
	
	double ratio = double(area1) / area3;
	cout << "La relacion de Area1/Area3 es: " << ratio << endl;

}

void Try4() ///////////////////////
{
	cout << "ingrese un valor" << endl;
	double Valor;
	cin >> Valor;
	if (!cin)
	{
		error("No se puede inresar ese valor");
	}
}

void Try5()
{
	//este codigo es funcional bajo ciertos casos, por ejemplo:
	vector<double> temps; 
	for (double temp; cin >> temp; ) 
		temps.push_back(temp);
	
	double sum = 0;
	double high_temp = 0; //si todos los numeros son negativos la tempoeratura mayor sera 0, aunque eso no este en los numeros ingresados
	double low_temp = 0; // algo parecido pasa en esta parte solo que si todos los nueros son mayor a 0 el numero menor seguira siendo 0, aunque sea incorrecto.
	for (double x : temps)

	{
		if (x > high_temp) high_temp = x; 
		if (x < low_temp) low_temp = x; 
		sum += x; 
	}
	cout << "High temperature: " << high_temp << '\n';
	cout << "Low temperature: " << low_temp << '\n';
	cout << "Average temperature: " << sum / temps.size() << '\n';
	
	cin.clear();
	cin.ignore();
	cin.get();
	
}

void Try6()
{
	double sum = 0;
	double Alta = -98; // temperatura más baja registrad
	double Baja = 60; //temperatura más alta registrada
	int no_of_temps = 0;
	cout << "Introduce diversas temperaturas de varios lugares" << endl;
	for (double temp; cin >> temp; )
	{ 
		if (temp < -98)
		{
			cout << "No exageres la temperatura mas baja registrada es de -98 grados centigrados" << endl;
			continue;
		}
		if (temp > 60)
		{
			cout << "No exageres la temperatura mas alta registrada es de 60 grados centigrados" << endl;
			continue;
		}
		++no_of_temps; 
		sum += temp; 
		if (temp > Alta)
		{
			Alta = temp;
		}
		if (temp < Baja)
		{
			Baja = temp;
		}
	}
	cout << "Temperatura más alta: " << Alta << '\n';
	cout << "Temperatura más baja: " << Baja << '\n';
	cout << "Average temperature: " << sum / no_of_temps << '\n';

	cin.clear();
	cin.ignore();
	cin.get();

}


int Try7()
{
	int length;
	int width;
	cout << "Escribe dos valores enteros positivos" << endl;
	cin >> length >> width;
	if (length <= 0 || width <= 0)
	{
		cout << "area() pre-condition, lo que sea para continuar" << endl;
		cin >> length;
		exit(-1);
	}
	int a = length * width;
	if (a <= 0)
	{
		cout<<"area() post-conditionlo que sea para continuar" << endl;
		cin >> length;
		exit(-1);
	}
	return a;
}

double ctok(double c) // converts Celsius to Kelvin
{
	string n;
	double k = c + 273.15; // lo pusieron como un entero cuando deveria ser un double
	if (k < 0)
	{
		//error("ese valor no es valido");
		cout << "No se puede mostrar esa temperatura, el progrma se cerrara presione 1 para continuar" << endl;
		cin >> k;
		exit(-1);
	}
	return k; //Regresaba un int, cuando deveria regresar a k y falto el ;
}

int Ejercicio1()
{
	double c = 0; 
	cout << "Ingrese los grados celcius que quieras convertir a kelvin" << endl;
	cin >> c;  //esta pidiendo un input de una variable que no se a declarado, lo corecto seria pedir el input de c
	double k = ctok(c); // esta mandando un string como argumento, cuando la funcion solo recibe un double
	cout << c << " grados Celcius es igual a: " << k << " grados Kelvin" << endl;  //el cout no puede empezar con una mayuscula
	return 0; //no devolvia ningun valor
}

int Ejercicio2()
{
	double c = 0; // declare input variable
	cout << "Ingrese los grados celcius que quieras convertir a kelvin" << endl;
	cin >> c;  //esta pidiendo un input de una variable que no se a declarado, lo corecto seria pedir el input de c
	if (c < -273.15)
	{
		//error("ese valor no es valido");
		cout << "Ese valor no es valido" << endl;
		return 1;
	}
	double k = ctok(c);
	cout << c << " grados Celcius es igual a: " << k << " grados Kelvin" << endl;  
	return 0; 
}

int Ejercicio3()
{
	double c = 0;
	cout << "Ingrese los grados celcius que quieras convertir a kelvin" << endl;
	cin >> c;  
	double k = ctok(c);
	if (k == -1)
	{
		return 1;
	}
	cout << c << " grados Celcius es igual a: " << k << " grados Kelvin" << endl;  
	return 0; 
}

int Ejercicio4()
{
	double Kelvin;
	double c = 0;
	cout << "Ingrese los grados celcius que quieras convertir a kelvin" << endl;
	cin >> c; 
	if (c < -273.15)
	{
		cout << "Ese valor no es valido" << endl;
		return 1;
	}
	double k = ctok(c); 
	cout << c << " grados Celcius es igual a: " << k << " grados Kelvin" << endl;  
	cout << "Ingrese los grados kelvin que quieras convertir a celcius" << endl;
	cin >> Kelvin;
	if (Kelvin < 0)
	{
		cout << "Ese valor no es valido" << endl;
		return 1;
	}
	cout << Kelvin << " grados kelvin es igual a: " <<Kelvin- 273.15 << " grados celcius" << endl;

	return 0; 
}

int Ejercicio5()
{
	double Faren;
	double c = 0;
	cout << "Ingrese los grados celcius que quieras convertir a  fahrenheit" << endl;
	cin >> c;
	if (c < -18)
	{
		cout << "Ese valor no es valido" << endl;
		return 1;
	}

	cout << c << " grados Celcius es igual a: " << (c*1.8)+32 << " grados Kelvin" << endl;
	cout << "Ingrese los grados fahrenheit que quieras convertir a celcius" << endl;
	cin >> Faren;

	if (Faren < -40)
	{
		cout << "Ese valor no es valido" << endl;
		return 1;
	}
	cout << Faren << " grados  fahrenheit es aproximadamente: " << (Faren-32)*(0.555555) << " grados celcius" << endl;

	return 0;
}

int Raiz(int a, int b, int c)
{
	double Valor = 0;
	double Verificacion=0;
	Verificacion = sqrt(a);
	Valor = sqrt(pow(b,2) - (4 * a*c));
	if ((a*a)!=Verificacion)
	{
		cout << "No se puede usar la formula generl con esos valores intentelo despues con otros, puse cualquier numero para salir" << endl;
		cin >> Valor;
		exit(-1);
	}
	return Valor;
}

void Ejercicio6()
{
	double a;
	double b;
	double c;
	cout << "Vamos a resolver una ecuacion cuadratica con la formula general" << endl;
	cout << "Ingrese valores para a, b, c." << endl;
	cin >> a >> b >> c;
	double root = Raiz(a, b, c);
	double first1 = (-b + root);
	double second= (2 * a);
	double first2 = (-b - root);
	double Resultado1 = first1 / second;
	double Resultado2 = first2 / second;
	cout << "El valor de X1 es de: " << Resultado1 << endl;
	cout << "El valor de X2 es de: " << Resultado2<< endl;


	cin.clear();
	cin.ignore();
	cin.get();

}

void Ejercicio7()
{
	int Valores;
	int Final=0;
	vector <int> Numeros;
	cout << "Por favor ingrese el número de valores que desea sumar: " << endl;
	cin >> Valores;
	cout << "Por favor ingrese algunos enteros(presione '|' para parar): " << endl;

	for (int temp; cin >> temp; )
	{
		Numeros.push_back(temp);
	}
	cin.clear();
	cin.ignore();
	cin.get();

	if (Valores>Numeros.size())
	{
		cout << "Esta pidiendo sumar mas valores de los que ingreso, el programa se terminara, pulse culaquier boton" << endl;
		cin >> Valores;
		exit(-1);
	}

	for (int i=0; i < Valores; i++)
	{
		Final = Final + Numeros[i];
	}

	cout << "La suma de los valores que pidio e ingrso es: " << Final << endl;
}

void Ejercicio8()
{
	double Valores;
	double Final = 0;
	int Adyacente=0;
	vector <double> Numeros;
	cout << "Por favor ingrese el número de valores que desea sumar: " << endl;
	cin >> Valores;
	cout << "Por favor ingrese algunos enteros(presione '|' para parar): " << endl;

	for (double temp; cin >> temp; )
	{
		Numeros.push_back(temp);
	}
	cin.clear();
	cin.ignore();
	cin.get();

	if (Valores > Numeros.size())
	{
		cout << "Esta pidiendo sumar mas valores de los que ingreso, el programa se terminara, pulse culaquier boton" << endl;
		cin >> Valores;
		exit(-1);
	}

	for (int i = 0; i < Valores; i++)
	{
		Final = Final + Numeros[i];
	}

	cout << "La suma de los valores que pidio e ingreso es: " << Final << endl;

	for(int i = 0; i < Numeros.size(); i++)
	{
		Adyacente = Numeros[i] - Numeros[i + 1];

		cout << "La diferncia entre el valor " << Numeros[i] << " y " << Numeros[i + 1] << " es de: " << Adyacente << endl;

	}
}

void Ejercicio9()
{
	//1836311903 este es el numero mas grande antes de que todo empiece a ir mal
	int Numero1 = 0;
	int	Numero2 = 1;
	int Resultado = 0;

	cout << "Vamos a escribir los numeros de la secuencia fobonacci: " << endl;

	for (int i=0; i < 10; i++)
	{
		if (i == 0)
		{
			Numero2 = 0;
		}

		if (i == 1)
		{
			Numero2 = 1;
		}
		
		if (i == 2)
		{
			Numero1 = 0;
		}

		Resultado = Numero1 + Numero2;
		Numero1 = Numero2;
		Numero2 = Resultado;

		cout << Resultado << endl;
	}
		
}

void Ejercicio10()
{
	int Toros = 0;
	int Vacas = 0;
	int Val1 = 0;
	int Val2 = 0;
	int Val3 = 0;
	int Val4 = 0;
	vector <int> Valores = { 1,2,3,4 };
	cout << "Vamoa jugar el uego toros y vacas, tienes que adivinar el numero elegido, ingresa 4 numeros si tienes alguno bien te diremos 1 toro" << endl;
	cout << "si tienes dos numeros bien diremos 2 toros y asi sucecivamente hasta que tengas 4 toros, comencemos, las vacas son los numeros que tiene incorrectos" << endl;
	
	while (Toros<4)
	{
		Toros = 0;
		Vacas = 0;
		cout << "Ingrese su primer valor" << endl;
		cin >> Val1;
		cout << "Ingrese su segundo valor" << endl;
		cin >> Val2;
		cout << "Ingrese su tercer valor" << endl;
		cin >> Val3;
		cout << "Ingrese su cuarto valor" << endl;
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

void Ejercicio11()
{
	int Toros = 0;
	int Vacas = 0;
	int Val1 = 0;
	int Val2 = 0;
	int Val3 = 0;
	int Val4 = 0;
	int N = 10;
	int Random;
	vector <int> Valores;
	cout << "Vamoa jugar el uego toros y vacas, tienes que adivinar el numero elegido, ingresa 4 numeros si tienes alguno bien te diremos 1 toro" << endl;
	cout << "si tienes dos numeros bien diremos 2 toros y asi sucecivamente hasta que tengas 4 toros, comencemos, las vacas son los numeros que tiene incorrectos" << endl;
	cout << "Ingrese un numero aleatorio" << endl;

	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		Random = rand() % N;
		Valores.push_back(Random);
		N = N - 1;
	}

	while (Toros < 4)
	{
		Toros = 0;
		Vacas = 0;
		cout << "Ingrese su primer valor" << endl;
		cin >> Val1;
		cout << "Ingrese su segundo valor" << endl;
		cin >> Val2;
		cout << "Ingrese su tercer valor" << endl;
		cin >> Val3;
		cout << "Ingrese su cuarto valor" << endl;
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
int Drill()
try {
	
	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
//catch (exception& e) {
//	cerr << "Oops: unknown exception!\n";
//	keep_window_open();
//	return 2;

//}

int Ejercicio12()
{
	string Day;
	int Number;
	int Suma = 0;
	vector < string > Dias;
	vector < int > Numero;

	while (Dias.size() < 6)
	{
		cout << "Ingresu un dia de la semana con su respectivo numero" << endl;
		cin >> Day;
		cin>> Number;

		if (Day == "lunes" || Day == "martes" || Day == "miercoles" || Day == "jueves" || Day == "viernes" || Day == "sabado" || Day == "domigo")
		{
			Dias.push_back(Day);
		}
		else
		{
			cout << "Ese dia no existe" << endl;
			return 1;
		}
		if (Number <= 0 || Number > 31)
		{
			cout << "El numero de dia esta fuera de rango" << endl;
			return 1;
		}
		else
		{
			Numero.push_back(Number);
		}

	}
	for (int i = 0; i < 6; i++)
	{
		Suma = Suma + Numero[i];
	}
	cout << "La suma de todos los dias(numero) es de: " << Suma << endl;



}

int main()
{
	int Eleccion;
	cout << "Escriba un numero dependiendo del ejercicio que quieras ver" << endl;
	cin >> Eleccion;

	switch (Eleccion)
	{
	case 1:
		Try3();
		break;

	case 2:
		Try4();
		break;

	case 3:
		Try5();
		break;

	case 4:
		Try6();
		break;

	case 5:
		Try7();
		break;

	case 6:
		Ejercicio1();
		break;

	case 7:
		Ejercicio2();
		break;

	case 8:
		Ejercicio3();
		break;

	case 9:
		Ejercicio4();
		break;

	case 10:
		Ejercicio5();
		break;

	case 11:
		Ejercicio6();
		break;

	case 12:
		Ejercicio7();
		break;

	case 13:
		Ejercicio8();
		break;

	case 14:
		Ejercicio9();
		break;

	case 15:
		Ejercicio10();
		break;

	case 16:
		Ejercicio11();
		break;

	default:
		break;

	}

	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}
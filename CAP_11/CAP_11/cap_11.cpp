#include"Includes.h"

void Minusculas(string Linea, int Contador);
int Acomodo(string Linea, int Contador, int Num_Lin);
void Sin_Vocal(string Linea, int Contador);

void Try1()
{
	cout << 11142000 << "\t(decimal)\n"
		<< hex << 11142000 << "\t(hexadecimal)\n"
		<< oct << 11142000 << "\t(octal)\n";
}

void Try2()
{
	int a;
	int b;
	int c;
	int d;
	cin >> a >> hex >> b >> oct >> c >> d;
	cout << a << '\t' << hex << b << '\t' << oct << c << '\t' << d;
}

void Try3()
{
	cout << 1234567.89 << '\t'
		<< fixed << 1234567.89 << '\t'
		<< scientific << 1234567.89 << '\n';
	cout << defaultfloat << 1234567.89;
}

void Try4()
{
	cout << "Apellido: " << '|' << setw(4) << "Ramirez" << setw(4) << '|' << '|' << setw(4) << "Gusman" << setw(4) << '|' << setw(4) << "Perez" << setw(4) << '|' << '|' << setw(4) << "Toro" << setw(4) << '|' << '|' << setw(4) << "Ontiveros" << setw(4) << '|' << endl;
	cout << "Nombre: " << '|' << setw(4) << "Roberto" << '|' << '|' << setw(4) << "Ricardo" << setw(4) << '|' << '|' << setw(4) << "Raul" << '|' << '|' << setw(4) << "Rodolfo" << setw(4) << '|' << '|' << setw(4) << "Jose" << setw(4) << '|' << endl;
	cout << "Num.Celular: " << '|' << setw(8) << "456454251" << '|' << endl;
	cout << "Correo electronico: " << '|' << setw(10) << "xc1700@hotmail.com" << '|' << endl;
}

void Drill()
{
	int birth_year;
	int birth_month;
	int birth_day;
	int a;
	int b;
	int c;
	cout << "Ingresa el año en el que naciste:" << endl;
	cin >> birth_year;
	cout << "Ingresa el mes en el que naciste:" << endl;
	cin >> birth_month;
	cout << "Ingresa el dia en el que naciste:" << endl;
	cin >> birth_day;
	cout << birth_year << "/" << birth_month << "/" << birth_day << "\t(decimal)" << endl;
	cout << hex << birth_year << "/" << birth_month << "/" << birth_day << "\t(hexadecimal)" << endl;
	cout << oct << birth_year << "/" << birth_month << "/" << birth_day << "\t(octal)" << endl;
	cout << "------------------" << endl;
	cout << "Ingrese el mismo valor tres veces y lo mostrareos de forma decimal, hexadecimal y octadecimal: " << endl;
	cin >> a; 
	cin >> b; 
	cin >> c;
	cout << endl;
	cout << a << endl;
	cout << hex << b << endl;
	cout << oct << c << endl;
	cout << "-------------" << endl;
	cout << 1234567.89 << '\t'
		<< fixed << 1234567.89 << '\t'
		<< scientific << 1234567.89 << '\n';
	cout << defaultfloat << 1234567.89;
}

void Ejercicio1()
{
	fstream Archivo;
	string Nombre;
	string Linea;
	int Contador = 0;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		Minusculas(Linea,Contador);
		Contador = Contador + 1;
	}
	Archivo.close();

}
void Minusculas(string Linea, int Contador)
{
	for (int i = 0; i < Linea.size(); i++)
	{
		if (isspace(Linea[i])) //si es un espacio no hagas nada
		{ 
			continue;
		}
		else if (isalpha(Linea[i])) //en caso de ser una letra se convertira a minisculas si ya lo es se queda igual
		{
			Linea[i]=tolower(Linea[i]);
		}
	}
	fstream Archivo;
	if (Contador == 0)
	{
		Archivo.open("Minusculas.txt", ios::out);
		Archivo << Linea << endl;
		Archivo.close();
	}
	else
	{
		Archivo.open("Minusculas.txt", ios::app);
		Archivo << Linea << endl;
		Archivo.close();
	}
}

void Ejercicio2()
{
	fstream Archivo;
	string Nombre;
	string Linea;
	int Num_Lin = 1;
	int Contador = 0;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		Num_Lin=Acomodo(Linea, Contador, Num_Lin);
		Contador = Contador + 1;
	}
	Archivo.close();
}

int Acomodo(string Linea, int Contador, int Num_Lin)
{
	fstream Archivo;
	if (Contador == 0)
	{
		Archivo.open("Linea.txt", ios::out);
		Archivo << Num_Lin << ": ";
		for (int i = 0; i < Linea.size(); i++)
		{
			if (isspace(Linea[i])) //si es un espacio no hagas nada
			{
				Archivo << endl;
				Num_Lin = Num_Lin + 1;
				Archivo << Num_Lin << ": ";
			}
			else if (isalpha(Linea[i])) //en caso de ser una letra se convertira a minisculas si ya lo es se queda igual
			{
				Archivo << Linea[i];
			}
		}
		Archivo << endl;
		Archivo.close();
		return Num_Lin = Num_Lin + 1;
	}
	else
	{
		Archivo.open("Linea.txt", ios::app);
		Archivo << Num_Lin << ": ";
		for (int i = 0; i < Linea.size(); i++)
		{
			if (isspace(Linea[i])) //si es un espacio no hagas nada
			{
				Archivo << endl;
				Num_Lin = Num_Lin + 1;
				Archivo << Num_Lin << ": ";
			}
			else if (isalpha(Linea[i])) //en caso de ser una letra se convertira a minisculas si ya lo es se queda igual
			{
				Archivo << Linea[i];
			}
		}
		Archivo << endl;
		Archivo.close();
		return Num_Lin = Num_Lin + 1;
	}
	
}
void Ejercicio3()
{
	fstream Archivo;
	string Nombre;
	string Linea;
	int Contador = 0;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		Sin_Vocal(Linea, Contador);
		Contador = Contador + 1;
	}
	Archivo.close();
}

void Sin_Vocal(string Linea, int Contador)
{
	fstream Archivo;
	if (Contador == 0)
	{
		Archivo.open("Sin_vocal.txt", ios::out);
		for (int i = 0; i < Linea.size(); i++)
		{
			Linea[i] = tolower(Linea[i]);
			if (isspace(Linea[i])) //si es un espacio no hagas nada
			{
				Archivo << " ";
			}
			else if (Linea[i] != 'a' && Linea[i] != 'e' &&Linea[i] != 'i' &&Linea[i] != 'o' && Linea[i] != 'u')
			{
				Archivo << Linea[i];
			}
		}
		Archivo << endl;
		Archivo.close();
	}
	else
	{
		Archivo.open("Sin_vocal.txt", ios::app);
		for (int i = 0; i < Linea.size(); i++)
		{
			Linea[i] = tolower(Linea[i]);
			if (isspace(Linea[i])) //si es un espacio no hagas nada
			{
				Archivo << " ";
			}
			else if (Linea[i] != 'a' && Linea[i] != 'e' &&Linea[i] != 'i' &&Linea[i] != 'o' && Linea[i] != 'u')
			{
				Archivo << Linea[i];
			}
		}
		Archivo << endl;
		Archivo.close();
	}
}

void Ejercicio4()
{
	fstream Archivo;
	int Hexa;
	int Decimal;
	int Octa;
	string H;
	string D;
	string O;
	cout << "Ingresa un numero decimal: "; cin >> Decimal; cout << endl;
	cout << "Ingresa un numero hexadecimal y lo convertiremos a decimal: "; cin >> hex >> Hexa; cout << endl;
	cout << "Ingresa un numero octal  y lo convertiremos a decimal: "; cin >> oct >> Octa; cout << endl;
	Archivo.open("Tipos.txt", ios::out);
	Archivo << Hexa << " hexadecimal converts to " << Hexa << endl;
	Archivo << Decimal << " Decimal converts to " << Decimal << endl;
	Archivo << Octa << " octal converts to " << Octa << endl;
	Archivo.close();
	cout << "Archivo llenado" << endl;
}

void Ejercicio5()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Clase.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			if (isdigit(Linea[i]))
			{
				A << Linea[i] << " is digit" << " ";
			}
			if (isalpha(Linea[i]))
			{
				A << Linea[i] << " is alpha" << " ";
			}
			if (isxdigit(Linea[i]))
			{
				A << Linea[i] << " is xdigit" << " ";
			}
			if (isupper(Linea[i]))
			{
				A << Linea[i] << " is upper" << " ";
			}
			if (islower(Linea[i]))
			{
				A << Linea[i] << " is lower" << " ";
			}
			if (isalnum(Linea[i]))
			{
				A << Linea[i] << " is alnum" << " ";
			}
			if (iscntrl(Linea[i]))
			{
				A << Linea[i] << " is cntrl" << " ";
			}
			A << endl;
		}
	}
	A.close();
	Archivo.close();
}

void Ejercicio6()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Sin.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			switch (Linea[i])
			{
			case '.':
				Linea[i] = ' ';
				continue;
			case ';':
				Linea[i] = ' ';
				continue;
			case ',':
				Linea[i] = ' ';
				continue;
			case '?':
				Linea[i] = ' ';
				continue;
			case '-':
				Linea[i] = ' ';
				continue;
			case '\'':
				Linea[i] = ' ';
				continue;
			default:
				continue;
			}
		}
		A << endl;
		A << Linea;
	}
	A.close();
	Archivo.close();
}

void Ejercicio7()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Sin_2.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			Linea[i] = tolower(Linea[i]);
			switch (Linea[i])
			{
			case '\'':
				if (Linea[i - 3]=='d')
				{
					Linea[i - 4] = 'd';
					Linea[i - 3] = 'o';
					Linea[i - 2] = ' ';
				}
				Linea[i] = 'o';
				continue;
			default:
				continue;
			}
		}
		A << endl;
		A << Linea;
	}
	A.close();
	Archivo.close();
}

void Ejercicio8()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Dic.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			switch (Linea[i])
			{
			case '.':
				Linea[i] = ' ';
				continue;
			case ';':
				Linea[i] = ' ';
				continue;
			case ',':
				Linea[i] = ' ';
				continue;
			case '?':
				Linea[i] = ' ';
				continue;
			case '-':
				Linea[i] = ' ';
				continue;
			case '\'':
				if (Linea[i - 3] == 'd')
				{
					Linea[i - 4] = 'd';
					Linea[i - 3] = 'o';
					Linea[i - 2] = ' ';
				}
				Linea[i] = 'o';
				continue;
			default:
				continue;
			}
		}

		for (int i = 0; i < Linea.size(); i++)
		{
			if (Linea[i] == ' ')
			{
				A << endl;
			}
			A << Linea[i];
		}
	}
	A.close();
	Archivo.close();
}

void Ejercicio9_2(vector<int> v)
{
	cout << "Please enter output file name\n";
	string oname;
	cin >> oname;
	ofstream ofs{ oname + "txt",ios_base::binary }; // note: stream mode
	// binary tells the stream not to try anything clever with the bytes
	if (!ofs)
	{
		error("can't open output file ", oname);
	}
	for (int x : v)
	{
		ofs.write(as_bytes(x), sizeof(int)); // note: writing bytes
	}
	ofs.close();
	return;

}

void Ejercicio9_1()
{
	ifstream ifs;
	vector<int> v;
	cout << "Please enter input file name\n";
	string iname;
	cin >> iname;
	ifs.open(iname + ".txt",ios_base::binary); // note: stream mode
	// binary tells the stream not to try anything clever with the bytes
	if (ifs.fail())
	{
		error("can't open input file ", iname);
	}
	for (int x; ifs.read(as_bytes(x), sizeof(int)); ) // note: reading bytes
		v.push_back(x);
	Ejercicio9_2(v);
	ifs.close();
}

vector <string> split(const string& s)
{
	vector<string>Cadena;
	string Palabra;
	for (int i = 0; i < s.size(); i++)
	{
		if (isspace(s[i]))
		{
			Cadena.push_back(Palabra);
			Cadena.push_back(" ");
			Palabra = "";
			continue;
		}
		Palabra.push_back(s[i]);
	}
	return Cadena;
}

vector<string> split(const string& s, const string& w)
{
	vector<string>Cadena;
	string Palabra;
	for (int i = 0; i < s.size(); i++)
	{
		if (isspace(s[i]))
		{
			Cadena.push_back(Palabra);
			Cadena.push_back(" ");
			Palabra = "";
			continue;
		}
		Palabra.push_back(s[i]);
	}
	Palabra = "";
	for (int i = 0; i < w.size(); i++)
	{
		if (isspace(w[i]))
		{
			Cadena.push_back(Palabra);
			Cadena.push_back(" ");
			Palabra = "";
			continue;
		}
		Palabra.push_back(w[i]);
	}
	return Cadena;
}

void Ejercicio12()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	string Inv;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Invertir.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			Inv.push_back(Linea[Linea.size() - (i + 1)]);
		}
		A << Inv;
		A << endl;
		Inv = "";
	}
	A.close();
	Archivo.close();
}

void Ejercicio13() // profe si se pregunta porque es igual al anterior es que hice el 12 primero y cuando lei el 13 me di cuenta que pedia lo casi lo mismo que el 12 pero yo ya lo habia echo con espacios
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	string Inv;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Invertir.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			Inv.push_back(Linea[Linea.size() - (i + 1)]);
		}
		A << Inv;
		A << endl;
		Inv = "";
	}
	A.close();
	Archivo.close();
}

void Ejercicio14()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	int Esp = 0;
	int Dig = 0;
	int Alp = 0;
	int Xdig = 0;
	int Upp = 0;
	int Low = 0;
	int Lnum = 0;
	int Cnt = 0;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("Cuantos.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			if (isspace(Linea[i]))
			{
				Esp = Esp + 1;
			}
			if (isdigit(Linea[i]))
			{
				Dig = Dig + 1;
			}
			if (isalpha(Linea[i]))
			{
				Alp = Alp + 1;
			}
			if (isxdigit(Linea[i]))
			{
				Xdig = Xdig + 1;
			}
			if (isupper(Linea[i]))
			{
				Upp = Upp + 1;
			}
			if (islower(Linea[i]))
			{
				Low = Low + 1;
			}
			if (isalnum(Linea[i]))
			{
				Lnum = Lnum + 1;
			}
			if (iscntrl(Linea[i]))
			{
				Cnt = Cnt + 1;
			}
		}
	}
	A << "Hay " << Esp << " espacios en el archivo que reviso." << endl;
	A << "Hay " << Dig << " digitos en el archivo que reviso." << endl;
	A << "Hay " << Alp << " letras en el archivo que reviso." << endl;
	A << "Hay " << Xdig << " hexadecimal digitos en el archivo que reviso." << endl;
	A << "Hay " << Upp << " letras mayusculas en el archivo que reviso." << endl;
	A << "Hay " << Low << " letras minusculas en el archivo que reviso." << endl;
	A << "Hay " << Lnum << " letter or a decimal digit? en el archivo que reviso." << endl;
	A << "Hay " << Cnt << " control character en el archivo que reviso." << endl;
	A.close();
	Archivo.close();
}

void Ejercicio15()
{
	fstream Archivo;
	fstream A;
	string Nombre;
	string Linea;
	int Contador = 0;
	string Num;
	int V = 0;
	cout << "Ingresa el nombre de tu archivo" << endl;
	cin >> Nombre;
	Archivo.open(Nombre + ".txt", ios::in); //abrir el archivo en modo lectura
	if (!Archivo) // Revisar si el archivo existe
	{
		cout << "Archivo no encontrado, adios" << endl;
		return;
	}
	A.open("NumTipos.txt", ios::out);
	while (!Archivo.eof()) //mientras no acabe de leer
	{
		getline(Archivo, Linea);
		for (int i = 0; i < Linea.size(); i++)
		{
			if (i > 0)
			{
				V = 1;
			}
			if (Contador == 20)
			{
				A << endl;
				Contador = 0;
			}
			if (isspace(Linea[i]))
			{
				A << scientific << Num << " ";
				if (Linea[i-V] != ' ')
				{
					Contador = Contador + 1;
				}
				Num = " ";
				continue;
			}
			if (isdigit(Linea[i]))
			{
				Num.push_back(Linea[i]);
			}
			if (Linea[i]=='.')
			{
				Num.push_back(Linea[i]);
			}
		}
		A << endl;
	}
	A.close();
	Archivo.close();
}

void Ejercicio16()
{

}


int main()
{
	int Eleccion;
	cout << "eleija el numero de programa que quiera usar: " << endl;
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
		Drill();
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
	case 13:
		Ejercicio8();
		break;
	case 14:
		Ejercicio9_1();
		break;
	case 15:
		split("Hola como estas ...");
		break;
	case 16:
		split("Hola como estas ...","ffghjihgv behw 854.? ");
		break;
	case 17:
		Ejercicio12();
		break;
	case 18:
		Ejercicio13();
		break;
	case 19:
		Ejercicio14();
		break;
	case 20:
		Ejercicio15();
		break;
	default:
		break;
	}

	cin.ignore();
	cin.get();

	return 0;
}
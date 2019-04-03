#include "Editar.h"
using namespace Nu;


int Editar::Menu()
{
	Editar A;
	Editar B;
	cout << "Bienvenido a este editor de texto, elige una opcion: " << endl;
	cout << "Crear un archivo nuevo(1)" << endl;
	cout << "Modificar un archivo ya exixtente(2)" << endl;
	cout << "Leer un archivo(3)" << endl;
	cout << "Salir(4)" << endl;
	cout << "Eleccion: "; cin >> m_Eleccion;
	switch (m_Eleccion)
	{
	case '1':
		system("cls");
		Nuevo();
		break;
	case '2':
		system("cls");
		Continuar();
		break;
	case '3':
		system("cls");
		operator<<(A);
		break;
	case '4':
		cout << "Gracias por usar este editor adios" << endl;
		break;
	default:
		cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
		break;
	}
	return 0;
}

void Editar::Nuevo()
{
	fstream*Archivo = new fstream;
	m_Eleccion = 'l';
	cout << "Escriba el nombre del archivo que quiera crear" << endl;
	cin >> m_Nombre;
	Archivo->open(m_Nombre + ".txt", ios::in);
	if (*Archivo)
	{
		cout << "El Archivo seleccionado ya existe" << endl;
		cout << "Si continua borrara todo lo que contenga" << endl;
		cout << "Quiere continuar? y/n" << endl;
		cin >> m_Eleccion;
		m_Eleccion = tolower(m_Eleccion);
		switch (m_Eleccion)
		{
		case 'y':
			system("cls");
			break;
		case 'n':
			system("cls");
			Archivo->close();
			delete Archivo;
			Menu();
			break;
		default:
			cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
			break;
		}
	}
	if (m_Eleccion == 'y')
	{
		Archivo->close();
		Archivo->open(m_Nombre + ".txt", ios::out);
		Archivo->close();
		delete Archivo;
		cout << "Quiere editar el archivo que creo?(1)" << endl;
		cout << "Quiere volver al menu?(2)" << endl;
		cout << "Quiere salir?(3)" << endl;
		cin >> m_Eleccion;
		switch (m_Eleccion)
		{
		case '1':
			system("cls");
			Continuar(m_Nombre);
			break;
		case '2':
			system("cls");
			Menu();
			break;
		case '3':
			cout << "Gracias por usar este editor adios" << endl;
			break;
		default:
			cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
			break;
		}
	}
	if(m_Eleccion=='l')
	{
		Archivo->close();
		Archivo->open(m_Nombre + ".txt", ios::out);
		Archivo->close();
		delete Archivo;
		cout << "Quiere editar el archivo que creo?(1)" << endl;
		cout << "Quiere volver al menu?(2)" << endl;
		cout << "Quiere salir?(3)" << endl;
		cin >> m_Eleccion;
		switch (m_Eleccion)
		{
		case '1':
			system("cls");
			Continuar(m_Nombre);
			break;
		case '2':
			system("cls");
			Menu();
			break;
		case '3':
			cout << "Gracias por usar este editor adios" << endl;
			break;
		default:
			cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
			break;
		}
	}
}

void Editar::Continuar()
{
	m_Opcion = '$';
	fstream*Archivo = new fstream;
	cout << "Escriba el nombre del archivo que quiera editar" << endl;
	cin >> m_Nombre;
	Archivo->open(m_Nombre + ".txt", ios::in);
	if (!*Archivo)
	{
		cout << "Archivo no encontrado volviendo al menu" << endl;
		cout << "-------------------------" << endl;
		Archivo->close();
		delete Archivo;
		Menu();
	}
	else
	{
		cout << "Escribe lo que quieras agragar al archivo, cuando quieras parar ingresa '&'" << endl;
		cout << "--------------------------------" << endl;
		while (!Archivo->eof())
		{
			getline(*Archivo, m_Texto);
			cin.sync();
			if (Archivo->eof())
			{
				cout << m_Texto;
			}
			else
			{
				cout << m_Texto << endl;
			}
		}
		Archivo->close();
	///////////////////////////////////////////////////////////////////////////////
		Archivo->open(m_Nombre + ".txt", ios::app);
		m_Contador = 1;
		while (Archivo)
		{
			if (m_Opcion=='$')
			{
				while (m_Texto != "#" )
				{
					getline(cin, m_Texto);
					cin.sync();
					if (m_Contador == 1 || m_Texto == "&" || m_Texto=="#")
					{
						if (m_Texto == "#")
						{
							m_Opcion = '#';
						}
						if (m_Texto == "&")
						{
							m_Opcion = '!';
							break;
						}
						m_Contador++;
						continue;
					}
					else
					{
						Archivo->seekp(X, ios::cur);
						*Archivo << m_Texto;
						*Archivo << endl;
					}
				}

				if (m_Opcion == '#')
				{
					while (m_Opcion!='$')
					{
						m_Opcion = _getch();
						switch (m_Opcion)
						{
						case 'a':
							X--;
							Archivo->seekp(X, ios::cur);
							break;
						case 'd':
							X++;
							Archivo->seekp(X, ios::cur);
							break;
						case 'w':
							Y++;
							Archivo->seekp(Y, ios::cur);
							break;
						case 's':
							Y--;
							Archivo->seekp(Y, ios::cur);
							break;
						default:
							m_Opcion = '$';
							m_Texto = "";
							Archivo->seekp(X, ios::cur);
							break;
						}
					}
					
				}
				if (m_Opcion == '!')
				{
					break;
				}
			}
		}


		Archivo->close();
		delete Archivo;
	
	}
	cout << "---------------------------------" << endl;
	cout << "Quiere volver al menu?(1)" << endl;
	cout << "Quiere salir?(2)" << endl;
	cin >> m_Eleccion;
	switch (m_Eleccion)
	{
	case '1':
		system("cls");
		Menu();
		break;
	case '2':
		cout << "Gracias por usar este editor adios" << endl;
		break;
	default:
		cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
		break;
	}
	
}

void Editar::Continuar(string N)
{
	
	fstream*Archivo = new fstream;
	cout << "Escribe lo que quieras agragar al archivo, cuando quieras parar ingresa '&'" << endl;
	cout << "--------------------------------" << endl;
	Archivo->open(m_Nombre + ".txt", ios::app);
	m_Contador = 1;
	while (m_Texto != "&")
	{
		getline(cin, m_Texto);
		cin.sync();
		if (m_Contador==1 || m_Texto == "&")
		{
			m_Contador++;
			continue;
		}
		else
		{
			*Archivo << m_Texto;
			*Archivo << endl;
		}
	}
	Archivo->close();
	delete Archivo;

	cout << "---------------------------------" << endl;
	cout << "Quiere volver al menu?(1)" << endl;
	cout << "Quiere salir?(2)" << endl;
	cin >> m_Eleccion;
	switch (m_Eleccion)
	{
	case '1':
		system("cls");
		Menu();
		break;
	case '2':
		cout << "Gracias por usar este editor adios" << endl;
		break;
	default:
		cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
		break;
	}
}


Editar & Nu::Editar::operator<<(Editar N)
{
	fstream*Archivo = new fstream;
	cout << "Escribe el nombre del archivo que quieras leer" << endl;
	cin >> N.m_Nombre;
	cout << "----------------------" << endl;
	Archivo->open(N.m_Nombre + ".txt", ios::in);
	if (!*Archivo)
	{
		cout << "Archivo no encontrado volviendo al menu" << endl;
		cout << "-------------------------" << endl;
		Archivo->close();
		delete Archivo;
		N.Menu();
	}
	else
	{

		while (!Archivo->eof())
		{
			getline(*Archivo, N.m_Texto);
			if (Archivo->eof())
			{
				cout << N.m_Texto;
			}
			else
			{
				cout << N.m_Texto << endl;
			}
		}
		cout<<"----------------------------" << endl;
		cout << "Quiere volver al menu?(1)" << endl;
		cout << "Quiere salir?(2)" << endl;
		cin >> N.m_Eleccion;
		switch (N.m_Eleccion)
		{
		case '1':
			system("cls");
			N.Menu();
			break;
		case '2':
			cout << "Gracias por usar este editor adios" << endl;
			break;
		default:
			cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
			break;
		}
	}
	return N;
}

Editar::Editar()
{
}


Editar::~Editar()
{
}

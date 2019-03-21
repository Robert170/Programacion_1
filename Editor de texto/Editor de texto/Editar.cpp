#include "Editar.h"



void Editar::Menu()
{
	cout << "Bienvenido a este editor de texto, elige una opcion: " << endl;
	cout << "Crear un archivo nuevo(1)" << endl;
	cout << "Modificar un archivo ya exixtente(2)" << endl;
	cout << "Salir(3)" << endl;
	cout << "Eleccion: "; cin >> m_Eleccion;
	switch (m_Eleccion)
	{
	case '1':
		Nuevo();
		break;
	case '2':
		Continuar();
		break;
	case '3':
		cout << "Gracias por usar este editor adios" << endl;
		break;
	default:
		cout << "Opcion no valida, se tomara la eleccion salir adios" << endl;
		break;
	}
}

void Editar::Nuevo()
{
	fstream*Archivo = new fstream;
	
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
	else if (m_Eleccion == 'y')
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
	else
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
	fstream*Archivo = new fstream;
	cout << "Escriba el nombre del archivo que quiera editar" << endl;
	cin >> m_Nombre;
	Archivo->open(m_Nombre + ".txt", ios::in);
	if (!*Archivo)
	{
		cout << "Archivo no encontrado volviendo al menu" << endl;
		Archivo->close();
		delete Archivo;
		system("cls");
		Menu();
	}
	else
	{
		cout << "Escribe lo que quieras agragar al archivo, cuando quieras parar ingresa '&'" << endl;
		cout << "--------------------------------" << endl;
		while (!Archivo->eof())
		{
			getline(*Archivo, m_Texto);
			cout << m_Texto << endl;
		}
		Archivo->close();

		Archivo->open(m_Nombre + ".txt", ios::app);
		while (*Archivo)
		{
			cin.ignore();
			getline(cin, m_Texto);
			if (m_Texto == "&")
			{
				break;
			}
			*Archivo << m_Texto;
		}
		Archivo->close();
		delete Archivo;
	}
}

void Editar::Continuar(string N)
{
	fstream*Archivo = new fstream;
	cout << "Escribe lo que quieras agragar al archivo, cuando quieras parar ingresa '&&'" << endl;
	cout << "--------------------------------" << endl;
	Archivo->open(m_Nombre + ".txt", ios::app);
	while (m_Texto != "&&")
	{
		cin.ignore();
		getline(cin, m_Texto);
		*Archivo << m_Texto;
	}
	Archivo->close();
	delete Archivo;
}

Editar::Editar()
{
}


Editar::~Editar()
{
}

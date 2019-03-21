#pragma once
#include<string>
#include<iostream>
#include <fstream>
#include<vector>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ios;
class Editar
{
public:
	char m_Eleccion;
	string m_Nombre;
	string m_Texto;
public:
	void Menu();
	void Nuevo();
	void Continuar();
	void Continuar(string N);
	Editar();
	~Editar();
};


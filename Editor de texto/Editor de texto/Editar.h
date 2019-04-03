#pragma once
#include<string>
#include<iostream>
#include <fstream>
#include<vector>
#include <stdio.h>  
#include <conio.h>
#include <windows.h> 
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::fstream;
using std::ios;
namespace Nu 
{
	class Editar
	{
	public:
		bool m_TxT;
		char m_Eleccion;
		string m_Nombre;
		string m_Texto;
		char m_Opcion;
		char m_Mover;
		int X=0;
		int Y=0;
		int m_Contador;
	public:
		int Menu();
		void Nuevo();
		void Continuar();
		void Continuar(string N,bool T);
	

		Editar& operator <<(Editar N);

		Editar();
		~Editar();
	};
}



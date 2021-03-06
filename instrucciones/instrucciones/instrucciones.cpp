// instrucciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
#include<iostream>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main() // instrucciones para encontrar el baño de arriba
{
	cout << "-----Instrucciones para encontrar el baño-----" << endl;
	cout << "1:Levantece de su asiento" << endl; 
	cout << "2:Camine hasta poder girar a la derecha en el pasillo" << endl;
	cout << "3:Gire a la derecha" << endl;
	cout << "4:Busque las escaleras" << endl;
	cout << "5:Suba por las escaleras un escalon a la vez" << endl;
	cout << "6:Al terminar de subir las escaleras mirar a la izquierda" << endl;
	cout << "7:A la izquierda se encuentra el baño" << endl;
	cout << "8:Acercarse a la puerta" << endl;
	cout << "9:Girar la perilla" << endl;
	cout << "10:Abrir la puerta y pasar por ella" << endl;
	keep_window_open(); 
	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

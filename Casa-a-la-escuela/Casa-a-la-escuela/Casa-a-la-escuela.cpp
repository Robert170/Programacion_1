// Casa-a-la-escuela.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "pch.h"
#include<iostream>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

int main() // instrucciones para ir de la casa a la escuela
{
	cout << "-----Instrucciones para ir de la casa a la escuela-----" << endl;
	cout << "1:Camine por todo el pasillo" << endl;
	cout << "2:Cuando llegue a una puerta detengase" << endl;
	cout << "3:Abrir la puerta usando la llave" << endl;
	cout << "4:Caminar hasta las ecaleras" << endl;
	cout << "5:Baje por las escaleras un escalon a la vez" << endl;
	cout << "6:Al terminar de bajar las escaleras salir de la casa" << endl;
	cout << "7:Caminar dos cuadras" << endl;
	cout << "8:Girar a la izquierda" << endl;
	cout << "9:Continuar caminado derecho y cruzar la glorieta" << endl;
	cout << "10: Seguir caminando, hasta llegar a otra glorita" << endl;
	cout << "11:Al llegar a la glorita girar a la izquierda y llegaste" << endl;
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

/*
unidad 1: tipos de datos
Autor:Edgar Ivan Hermosillo Reyes
Fecha: 15/09/2022
Descripcion: Muestra los diferentes tipos de datos en c++
*/
#include <iostream>
#include<stdio.h>
using namespace std;

int main ()
{
    int unsigned entero = -2147483647;
    float flotante = 3.4e87;
    double grande = 3.2645453465464546;
    char caracter = '@';

    cout << "este programa muestra los tipos de datos.  \n";
    cout << "el numero entero es " << entero << endl;
    cout << "el tamaño del entero es: " <<sizeof(entero) <<"bytes" <<endl;
    cout << "el caracter char es " <<caracter <<endl;
    cout << "el tamaño del char es" <<sizeof(caracter) <<"bytes" <<endl;
    cout << "el caracter float es " <<flotante <<endl;
    cout << "el tamaño del float es" <<sizeof(flotante) <<"bytes" <<endl;

    
    
    return 0;

}

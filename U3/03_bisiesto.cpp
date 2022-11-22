#include <iostream>
using namespace std;
int main()
{
   int anio;

   //lectura por teclado del año
   cout << "Introduce a"<<(char)164 <<"o: "; //164 ascii de ñ
   cin >> anio;

   if(a%4 == 0 and a%100 != 0 or a%400 == 0) //Condición de año bisiesto                                              
      cout << "Bisiesto" << endl;
   else
      cout << "No es bisiesto" << endl;

   system("pause"); 
}
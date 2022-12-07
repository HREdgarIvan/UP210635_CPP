
#include <iostream.h>
    #include <stdlib.h>
#else
    #include <iostream>
    #include <cstdlib>
    using namespace std;
#endif

int main (void)
{
int billetes_de_10, billetes_de_100, billetes_de_20, billetes_de_200, billetes_de_5;
    int billetes_de_50, billetes_de_500, cantidad_de_euros, monedas_de_1, monedas_de_2;
    cout << "Ingresa el valor de cantidad de euros: ";
    cin >> cantidad_de_euros;
    cin.get();
    monedas_de_1=cantidad_de_euros;
    billetes_de_500=(monedas_de_1-monedas_de_1%500)/500;
    monedas_de_1=monedas_de_1%500;
    billetes_de_200=(monedas_de_1-monedas_de_1%200)/200;
    monedas_de_1=monedas_de_1%200;
    billetes_de_100=(monedas_de_1-monedas_de_1%100)/100;
    monedas_de_1=monedas_de_1%100;
    billetes_de_50=(monedas_de_1-monedas_de_1%50)/50;
    monedas_de_1=monedas_de_1%50;
    billetes_de_20=(monedas_de_1-monedas_de_1%20)/20;
    monedas_de_1=monedas_de_1%20;
    billetes_de_10=(monedas_de_1-monedas_de_1%10)/10;
    monedas_de_1=monedas_de_1%10;
    billetes_de_5=(monedas_de_1-monedas_de_1%5)/5;
monedas_de_1=monedas_de_1%5;
    monedas_de_2=(monedas_de_1-monedas_de_1%2)/2;
    monedas_de_1=monedas_de_1%2;
    cout << "Valor de billetes de 10: " << billetes_de_10 << endl;
    cout << "Valor de billetes de 100: " << billetes_de_100 << endl;
    cout << "Valor de billetes de 20: " << billetes_de_20 << endl;
    cout << "Valor de billetes de 200: " << billetes_de_200 << endl;
    cout << "Valor de billetes de 5: " << billetes_de_5 << endl;
    cout << "Valor de billetes de 50: " << billetes_de_50 << endl;
    cout << "Valor de billetes de 500: " << billetes_de_500 << endl;
    cout << "Valor de monedas de 1: " << monedas_de_1 << endl;
    cout << "Valor de monedas de 2: " << monedas_de_2 << endl;
    cout << endl;
    system ("pause");
    return EXIT_SUCCESS;
}
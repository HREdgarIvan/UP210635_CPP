#include <iostream>
using namespace std;
int main()
{
    int renta, porcentaje;
    float impuestoAPAgar;
    cout << "Introduce el costo de tu renta: " << endl;
    cin >> renta;

   
    if (renta < 10000)
    {
        porcentaje = 5;
    }
    if (renta >= 10000 && renta < 20000)
    {
        porcentaje = 15;
    }
    if (renta >= 20000 && renta < 35000)
    {
        porcentaje = 20;
    }
    if (renta >= 35000 && renta < 60000)
    {
        porcentaje = 30;
    }
    if (renta >= 60000)
    {
        porcentaje = 45;
    }
    impuestoAPAgar = renta * porcentaje / 100;
    cout << "impuesto en porcentaje es de: " << porcentaje << "%" << endl;
    cout << "El impuesto a pagar es de: $" << impuestoAPAgar << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int contador = 0;
    float teAc = 0, temperatura, tempM = -273, tempme = 100000;

    do
    {
        cout << "temperatura: ";
        cin >> temperatura;
        teAc += temperatura;
        contador++;
        if (temperatura >= tempM)
        {
                tempM = temperatura;
        }
        if (temperatura <= tempme)
        {
       
                  tempme = temperatura;
        }
    } while (contador < 6);
    cout << "la temperatura media es de: " << teAc / 6 << "°C" << endl;
    cout << "la mas baja temperatura es: " << tempme << "°C" << endl;
    cout << "la mas alta es: " << tempM << "°C" << endl;

    return 0;
}
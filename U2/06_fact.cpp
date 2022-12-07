#include <iostream>
using namespace std;

int main()
{
    int cdp;
    float pdp, tf=0;
    do
    {
        cout << "cuantos productos se vendieron?: ";
        cin >> cdp;
        if (cdp != 0)
        {
            cout << "Introduce su precio: $";
            cin >> pdp;
    
        }
        tf += (cdp*pdp);
    } while (cdp > 0);
    cout << "calculando el pago...bip...bip...\n costo total= $" << tf << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int tp, iv, inv;

    cout << "Quieres una pizza vegetariana: \n 1=si 0=No  \n =";
    cin >> tp;
    if (tp == 1)
    {
        cout << "los ingredientes de la pizza: \n  y solo puedes tomar uno y todas tienen queso mozzarell y sasalsa de tomate. \n 1.Tofu 2.Pimientos " << endl;
        cout << "=====================================================================" << endl;
        cout << "inserte numero de ingredientes: " << endl;
        cin >> iv;
        cout << "=====================================================================" << endl;
        if (iv == 1)
        {

            cout << "tu pizza sera vegetariana con tofu" << endl;
        }
        else if (iv == 2)
        {

            cout << "vegetariana con pimientos en camino " << endl;
        }
        else
        {

            cout << "inserte datos correctos porfavor.";
        }
    }
    else if (tp == 0)
    {
        cout << "estos son los ingredientes no vegetarianos: \n solo puedes tomar uno y todas tienen queso mozzarella y sasalsa de tomate.  \n 1.Peperoni 2.jamon 3.Salmon " << endl;
        cout << "=====================================================================" << endl;
        cout << "inserte numero de ingredientes deseados: " << endl;
        cin >> inv;
        cout << "=====================================================================" << endl;
        if (inv == 1)
        {
            cout << "tu pizza es una de peperoni sin vegetal " << endl;
        }
        else if (inv == 2)
        {
            cout << "una de jamon no vegetariana en camino " << endl;
        }
        else if (inv == 3)
        {
            cout << "de salmon no vegetariana espero que la disfrute " << endl;
        }
        else
        {
            cout << "inserte data correcta.";
        }
    }
    else
    {
        cout << "=====================================================================" << endl;
        cout << "inserte datos correctos client@.";
    }

    return 0;
}
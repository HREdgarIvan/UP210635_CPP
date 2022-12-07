#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < 10; i++)
    {
     if (i == 6)
     {
        break;
     } else{
         cout << i << endl;
       }
       cout << "numero" << i <<endl;
    }
    cout << ". . . hecho" << endl;
    return 0;
}

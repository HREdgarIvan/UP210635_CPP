//objetivo for anidados
//  tablas del 1 al 10
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    int n,i;

    i=1;
      for ( i = 0; i < 100; i++)
      {
        for ( n = 0; n < 10; n++)
        {
             cout<<i<<"*"<<n<<"*"<<i*n<<endl;
        }
        cout<<endl;
      }
      
    
    
    return 0;
}
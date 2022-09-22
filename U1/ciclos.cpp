#include <iostream>
using namespace std;

int main()
{
    int suma = 0;
    int n = 10;
    int i=1;
    int spar = 0;
    int simpar = 0;
    int stotal = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            spar=spar+i;
            
        }
        else
        {
            simpar=simpar + i;
        }  
        
    }
     printf ("la suma de los impares es: %d \n " ,simpar);
    printf ("la suma total de los pares es: %d \n" ,  spar);
    stotal= spar + simpar;
    printf("la suma de %d y de %d fue de %d",spar, simpar, stotal);
    return 0;
}
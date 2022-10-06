//objetivo: while mientras true
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    char opcion='s';
    
       while (opcion == 's')
       {
        printf("inserte numero: ");
    scanf("%d", &n);
    i=1;
    do
    {
        printf("%d x %d = %d \n", n, i,n*i);
        i++;
    } while (i<=10);
    
    
    printf("\nplanea hacer otro? <s/n> : ");
    scanf("%s", &opcion);
       }
       printf("...acabado");
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
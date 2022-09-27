#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int edad, i = 0;
    while (i <= 0)
    {
        cout<<endl<<"Ingrese una edad: ";cin>>edad;

        if (edad > 0 && edad <= 30)
        {
            printf("primera edad /n");
        }
        {
            if (edad >= 31 && edad <= 60)
            {
                printf("segunda edad /n");
            }
            if (edad >= 61 && edad <= 90)
            {
                printf("tercera edad /n");
            }
            if (edad > 91 && edad <= 150)
            {
                printf("horas extras /n");
            }
            if (edad > 150)
            {
                printf("datos invalidos");
            }
        }
        i++;
    }
}

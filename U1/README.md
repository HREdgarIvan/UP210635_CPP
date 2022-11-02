<center>hola

bienvenido

# H1 linea de encabezado de los temas
  
__Edgar Ivan Hermosillo Reyes__  
*UP210635*
>programas unidad 1:
---
___
***
1. Hola mundo
   ````
   #include <iostream>
   int main(){
    //Print on screen a text
    std::cout<<"Hello World!" ;

    // Return 0 means that the programm ends succesfully
    return 0;

    }
   ````
   ---
2. parimpar
   ````
   #include <iostream>
    using namespace std;

   int main()
   {
   cout<< "par o impar" <<endl<<"\n"<<endl;
   return 0;

   }
   ````
   ---
    
3. tipos de datos.
   ````
    #include <iostream>
    #include<stdio.h>
    namespace std;

    int main ()
    { 
    int unsigned entero = -2147483647;
    float flotante = 3.4e87;
    double grande = 3.2645453465464546;
    char caracter = '@';

    cout << "este programa muestra los tipos de datos.  \n";
    cout << "el numero entero es " << entero << endl;
    cout << "el tamaño del entero es: " <<sizeof(entero) <<"bytes" <<endl;
    cout << "el caracter char es " <<caracter <<endl;
    cout << "el tamaño del char es" <<sizeof(caracter) <<"bytes" <<endl;
    cout << "el caracter float es " <<flotante <<endl;
    cout << "el tamaño del float es" <<sizeof(flotante) <<"bytes" <<endl;



    return 0;
   ````
   ---
4. ciclos
   ````
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

   
5. Edades
  ````
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

  ````
***
![Alt baron](baron.jpg "baron")

***






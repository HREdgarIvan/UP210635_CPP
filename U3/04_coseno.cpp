#include<conio.h>
#include<stdio.h>
#include<math.h>

void main()
{
float ,s, c, t; /definir variables/
Double x;
clrscr(); /borrar pantalla/
printf("Escribe un numero: "); /captura el valor del angulo/
scanf("%d",&x); /lo guarda en x/
s=sin(x*3.14159/180); /hallar seno en radianes es x por pi/180/
c=cos(x*3.14159/180); /hallar coseno/
t=tan(x*3.14159/180); /hallar tangente/
printf("El seno = %.5f\t", s); /* el .5 son los decimales que quieres que tenga*/
printf("El coseno = %.5f\t",c);
printf("la tangente = %.5f\t", t);
getch();
return (0);
}
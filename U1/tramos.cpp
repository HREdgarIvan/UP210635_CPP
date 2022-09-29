#include <iostream>
using namespace std;
int main(){
int renta,impuesto;
cout<<"ingrese su renta";
cin>>renta;
if (renta < 10000)
{
    impuesto=renta*.05;
}
else if (renta < 20000)
{
    impuesto=renta*.15;
}
else if (renta < 35000)
{
    impuesto=renta*.2;
}
else if (renta < 60000)
{
    impuesto=renta*.3;
}
else
{
    impuesto=renta*.45;
}
cout<<"el impuesto es de ", impuesto;
}
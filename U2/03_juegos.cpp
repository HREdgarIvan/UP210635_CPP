#include <iostream>
using namespace std;

int main(){
    int coE, edad; 

    cout<<"cual es la edad del cliente? "<<endl;
    cin>>edad;
    if (edad<0){
        cout<<"mire la data insertada porfavor"<<endl;

    }
    else{
        if (edad<4){
            coE=0;
        }
        if (edad>=4 && edad<=18){
            coE=5;
        }
        if (edad>18){
            coE=10;
        }
    cout<<"el precio del ticket es= $"<<coE<<endl;
    }


    return 0;
}
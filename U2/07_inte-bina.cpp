#include <iostream>
using namespace std;

int main(){
    int decimal;
    string resultado;
    do{ 
        cout<<"agregue el decimal que quiere a binario : ";
        cin>>decimal;
        if(decimal>0){

        }
        else if(decimal==0){
            cout<<"su resultado es: 0"<<endl;

        }
        else{
            cout<<"error :(: ingrese un valor diferente a 0 "<<endl;
        }
    }while(decimal!=0);
}
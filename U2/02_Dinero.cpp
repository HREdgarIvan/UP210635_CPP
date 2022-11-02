#include<iostream>
using namespace std;
int main(){
    float  ben;
    double cal;
    
    cout<<"inserta tu rating: "<<endl;
    cin>>cal;
    
    if (cal==0.0||cal==0.4||cal>=0.6&&cal<=1){
        ben= 2400*cal;
        cout<<"tu rate es: "<<cal<<endl;
        cout<<"tu beneficio en cash es: $"<<ben<<endl;
    }
    else {
        cout<<"Error: pon tu rating de forma correcta  "<<endl;
    }
    
        
    return 0;
}
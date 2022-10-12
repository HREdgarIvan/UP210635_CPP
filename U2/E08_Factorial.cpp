 #include <iostream>
using namespace std;
int main(){
    int e=5;
    int i=1;
    while (e>=0)
    {
        if(e==0){
            i=i*1;
        }else{
            i=i*e;
        }
        e--;
    }
    cout<<i;
    return 0;
}

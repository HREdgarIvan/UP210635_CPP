#include<iostream>
using namespace std;
string invertir (string p){
int x= p.length();
for (int i = 0; i <= x; i++)
{
     if (islower(p[i]))
     {
        p[1]=toupper(p[1]);
     }else{
            p[1]=tolower(p[1]);
      }
     

}
return p;        
}

char voltear(char p[]){
    int i=0;
    while (p[1] != '\0')
    {
        if (islower(p[i])
        {
            p[1]=toupper(p[1]);
        }else{
            p[1]=tolower(p[1]);
            
        }
        
    }
    
}

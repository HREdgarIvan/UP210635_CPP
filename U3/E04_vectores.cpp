#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
int grades[5];
 grades[0] = 10;
 grades[1] = 7;
 grades[2] = 8;
 grades[3] = 10;
 grades[4] = 9;

int gr2[] = {10,7,8,9,8};
int n = 5;
int total = 5;

 int meses[] = {0,31,28,31, 31};
    for (int i = n; i <=5; i++)
    {
        total = total + gr2[i];
    }
    cout << total << endl;
    return 0;
}
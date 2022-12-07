#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char letra='A';
    char numero='1';
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<letra << "       ";
        letra= letra + 1;
    }
    letra='Z';
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<letra << "       ";
        letra= letra-1;
    }
    char numero='1';
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<letra << "       ";
        letra= letra + 1;
    }
    numero='10';
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout<<letra << "       ";
        letra= letra-1;
    }

        
    return 0;

}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string palabra;
    
    cout<<"Ingrese la palabra:";
    getline(cin, palabra);
    cout << palabra.size()<< endl;
    
    for(int i= palabra.size()-1;i>=0; i--)
    {
     cout<<palabra[i];
    }
    return 0;
}

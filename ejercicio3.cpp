#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool buscar(char caracter, vector<char> vLetras)
{
    bool encontro = false;
    for(auto i: vletras)
    {
        if (i == caracter)
        encontro = true;
    }
    return encontro;
}

int posicionletras(char caracter,vector<char> vletras)
{
    int posicion =0;
    for(auto i: vletras)
    {
        if(i == caracter)
        return posicion;
        posicion++;
    }
    return posicion;
        
    }
    
    
}

int main()
{
    string texto;
    cout<<"Ingrese su texto:";
    cin >> texto;
    
    vector<char> letras;
    vector<int> nletras;
    
    
    for(auto i:texto)
    {
        if(buscar(i,letras) == true)
        {
            auto posicion = posicionletras(i, letras);
            nletras[posicion]++;
        }
        else
        {
            letras.push_back(i);
            nletras.push_back(1);
        }
        
    }
    
    for (int i=0; i< letras.size(); i++)
    {
        cout <<"La cantidad de la letra" << letras[i] << " es "<< nletras[i] <<endl;
    }
}
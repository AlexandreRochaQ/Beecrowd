#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, valor, posicao, Menorvalor;

    cin >> N;
    
    int vet[N];
    
    for (int i=0 ; i<N ; ++i)
    {
        cin >> valor;
        
        vet[i] = valor;
    }

    Menorvalor = vet[0];

    for (int i=1 ; i<N ; ++i )
    {
        if (Menorvalor > vet[i])
        {
            Menorvalor = vet[i];
            posicao = i;
        }  
    }
    cout << "Menor valor: " << Menorvalor << endl;
    cout << "Posicao: " << posicao << endl;
}
// Drê :>
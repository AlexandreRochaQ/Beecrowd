#include <bits/stdc++.h>

using namespace std;

int main()
{
    string alfabeto, letras[27];
    int N, escolha;

    while(cin >> alfabeto)
    {   
        cin >> N;
        for (int i=0 ; alfabeto[i] ; ++i)
        {
            letras[i+1] = alfabeto[i];
        }
        for (int i=0 ; i < N ; i++)
        {
            cin >> escolha;

            cout << letras[escolha];
        }
        cout << endl;
    }
}
// Drê 
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string notas;
    while(cin >> notas)
    {
        if(notas == "*")
            break;

        double pontuacao = 0;
        int contagem = 0, barras = 0;

        for(int i=0 ; notas[i] ; i++)
        {
            if(notas[i] == '/') 
                barras++;

                else if (notas[i] == 'W')
                    pontuacao += 1;
                else if (notas[i] == 'H')
                    pontuacao += 0.5;
                else if (notas[i] == 'Q')
                    pontuacao += 0.25;
                else if ( notas[i] == 'E')
                    pontuacao += 0.125;
                else if (notas[i] == 'S')
                    pontuacao += 0.0625;
                else if (notas[i] == 'T')
                    pontuacao += 0.03125;
                else if (notas[i] == 'X')
                    pontuacao += 0.015625;

            if(barras == 2)
            {
                if(pontuacao == 1)
                    contagem++;

                pontuacao = 0;
                barras = 1;
            }
        }
        cout << contagem << endl;
    }
}
// Drê :>
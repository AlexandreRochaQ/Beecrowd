#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    
    while(cin >> N)
    {
        if(N == 0)
            break;

        string lerNomes;
        int lerValores;
        vector<string>nome;
        vector<int>valor;

        for(int i=0 ; i < N; i++)
        {
            cin >> lerNomes >> lerValores;

            nome.push_back(lerNomes);
            valor.push_back(lerValores);
        }
        
        int contador = 0;
        int repeticao_for = 0;
        int limite_criancas = 0;

        while(nome.size() != 1)
        {
            limite_criancas = valor.size(); 
            repeticao_for = valor[contador];
            contador = 0;

            if(repeticao_for%2==1)
            {
                for(int i=0 ; i < repeticao_for ; i++, contador++)
                {
                    if(contador==limite_criancas)
                        contador=0;
                }
            }
            else 
            {
                contador=valor.size();

                for(int i=0 ; i < repeticao_for ; i++, contador--)
                {
                    if(contador == 0)
                        contador=valor.size();
                    
                    cout << " : " << contador;
                }
            }
            repeticao_for=valor[contador];
            nome.erase(nome.begin()+contador);
            valor.erase(valor.begin()+contador);
        }
        cout << nome.front() << endl;
    }
}
// A brincadeira consiste em
// vai em sentido anti horário >
// caso for par ele vai em sentido horario <
// começa no primeiro e a contagem vai a partir do próximo.
// quem sair pega o numero e continua contagem sem ele e no próximo q seguia


// saida = "Vencedor(a): " 
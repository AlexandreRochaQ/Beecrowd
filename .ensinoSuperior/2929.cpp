#include <bits/stdc++.h>

#define _; ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int>acoes;

    int N, valor;
    cin >> N;
    string operacao;

    while(N--)
    {
        cin >> operacao;

        if(operacao == "PUSH")
        {
            cin >> valor;

            if(acoes.empty()) acoes.push(valor);

            else if(valor<acoes.top())
            {
                acoes.push(valor);
            }
            else
            {
                acoes.push(acoes.top());
            }
        }
        else if(operacao == "POP")
        {
            if(!acoes.empty()) acoes.pop();
            else cout << "EMPTY" << endl;
        }
        else if(operacao == "MIN")
        {
            if(!acoes.empty()) cout << acoes.top() << endl;
            else cout << "EMPTY" << endl;
        }
    }
}
// Drê :>
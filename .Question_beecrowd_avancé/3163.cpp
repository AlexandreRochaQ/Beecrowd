#include <bits/stdc++.h>

using namespace std;

int main()
{
    string valor;
    int Ponto;

    deque<string>Av1, Av2, Av3, Av4;
    vector<string>Posicoes;


    cin >> Ponto;

    while(1)
    {
        cin >> valor;

        if(valor == "-1")
            Ponto = -1;
        else if(valor == "-3")
            Ponto = -3;
        else if(valor == "-2")
            Ponto = -2;
        else if (valor =="-4")
            Ponto = -4;
        else if (valor =="0")
            break;

        else if(Ponto == -1)
        {
            Av1.push_back(valor);
        }
        else if(Ponto == -3)
        {
            Av3.push_back(valor);
        }
        else if(Ponto == -2)
        {
            Av2.push_back(valor);
        }
        else
        {
            Av4.push_back(valor);
        }
    }

    bool troca = true;

    while(!Av1.empty() or !Av2.empty() or !Av3.empty() or !Av4.empty())
    {
        
        if(!Av1.empty())
        {
            if(troca) 
            {
                troca = false; 
            } else cout << ' '; 
           cout << Av1.front();
            Av1.pop_front(); 
        }
        
        if(!Av3.empty())
        {
            if(troca) 
            {
                troca = false; 
            } else cout << ' '; 
           cout << Av3.front();
            Av3.pop_front(); 
        }
        
        if(!Av2.empty())
        {
            if(troca) 
            {
                troca = false; 
            } else cout << ' '; 
           cout << Av2.front();
            Av2.pop_front(); 
        }

        if(!Av4.empty())
        {
            if(troca) 
            {
                troca = false; 
            } else cout << ' '; 
           cout << Av4.front();
            Av4.pop_front(); 
        }
    }
    cout << endl;
}
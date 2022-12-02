#include <bits/stdc++.h>

using namespace std;

int main()
{
    string calculos;
    
    while(cin >> calculos)
    {
        deque<char>pares;
        pares.clear();

        int i, ans = 0;

        bool verificacao = true;

        for(i=0 ; calculos[i] ; i++)
        {
            if(calculos[i] == '(')
            {
                pares.push_front(calculos[i]);
                ans = i;
                break;
                
            }
            else if(calculos[i] == ')')
            {
                verificacao = false;
                break;
            }
        }

        int maior = 0;

        if((pares.front() == '(') and (verificacao = true))
        {
            for(i=ans+1 ; calculos[i] ; i++)
            {
                if(calculos[i] == ')')
                    maior++;

                if(calculos[i] == ')' and pares.front() == '(')
                {
                    pares.pop_front();
                    maior--; 
                }
                else if(calculos[i] == '(')
                {
                    pares.push_front(calculos[i]);
                }
            }
        }

        if(!pares.empty())
            verificacao = false;

        else if(maior != 0)
            verificacao = false;
        
        if(verificacao)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
}    

   
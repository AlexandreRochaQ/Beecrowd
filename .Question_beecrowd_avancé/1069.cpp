#include<bits/stdc++.h>
using namespace std;
#define cinGet(a); cin.ignore(); getline(cin, a);

int main()
{
   int casos;
   cin >> casos;
   string mineracao;

   while(casos--)
   {
        cin >> mineracao;

        deque<char>diamantes;
        diamantes.clear();
        int aux, i;

        for(i=0 ; mineracao[i] ; i++)
        {
            if(mineracao[i] == '<')
            {
              diamantes.push_front(mineracao[i]);
              break;
            } 
        }

        aux = i; int ans = 0;

        if(diamantes.front() == '<')
        {
            for(i=aux+1 ; mineracao[i] ; i++)
            {
                if(mineracao[i] == '>' and diamantes.front() == '<')
                {
                    diamantes.pop_front();
                    ans++;
                }
                else if(mineracao[i] == '<')
                {
                    diamantes.push_front(mineracao[i]);
                }
            }
        }
        cout << ans << endl;
   }
}
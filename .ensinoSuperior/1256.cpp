#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main()
{
    int N;

    cin >> N;
    
    while(N--)
    {
        int contagem, numeracoes, valores, resto;

        vector<vector<int>>sequenciaNumerica(102);
        
        cin >> contagem >> numeracoes;
        
        for(int i=0 ; i < numeracoes ; i++)
        {
            cin >> valores;

            resto = valores%contagem;

            for(int j=0 ; j < contagem ; j++)
            {
                if(resto == j)
                    sequenciaNumerica[j].push_back(valores);     
            }
        }
        for(int i=0 ; i < contagem ; i++)
        {
            if(!sequenciaNumerica[i].empty()) 
            {
                    cout << i;

                for(int j=0 ; j < sequenciaNumerica[i].size() ; j++)
                {
                    cout << " -> "<< sequenciaNumerica[i][j];     
                }
                cout <<" -> \\" << endl;
            }
            else
            {
                cout << i << " -> \\" << endl;
            }
        }
        if(N!=0) cout << endl;
    }
}
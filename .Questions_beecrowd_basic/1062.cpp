#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, casosTestes;
    while(cin >> N)
    {
        if(N == 0) break;

        while(cin >> casosTestes)
        {
            if(casosTestes == 0)
            {
                cout << endl;
                break;
            }
            else
            {   
                vector<int> sequencia;

                sequencia.push_back(casosTestes);

                for(int i = 1 ; i < N ; i++)
                {
                    cin >> casosTestes;
                    sequencia.push_back(casosTestes);    
                }
            }
        }
    }
}
// Drê
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int vet[N];
    bool flag = 0;
    
    cin >> vet[0];

    for (int i=1 ; i<N ; i++)
    {
        cin >> vet[i];
    }

    for (int i=1 ; i<N ; i++)
    {
        if (vet[i]==vet[i-1])
        {
            cout << "0" << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        for (int i=2 ; i<N ; i++)
        {
            if ((vet[i-2]>vet[i-1] and vet[i-1]<vet[i]) or (vet[i-2]<vet[i-1] and vet[i-1]>vet[i]))
            {flag=0;}
            else
            {
                cout << "0" << endl;
                flag=1;
                break;
            }
        }
    }
    if(!flag) cout << "1" << endl;
}
// Drê
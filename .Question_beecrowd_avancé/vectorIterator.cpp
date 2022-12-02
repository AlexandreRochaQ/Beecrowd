#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define pb pushback
#define ll long long
#define ii pair<int,int>
#define p push
#define _; ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    long long int N, numeros;   

    cin >> N;

    vector<int>vecP, vecI;

    for (int i=0 ; i < N ; i++)
    {
        cin >> numeros;

        if (numeros%2==0) vecP.push_back(numeros);
        else vecI.push_back(numeros);
    }

    sort(vecP.begin(), vecP.end());
    sort(vecI.rbegin(), vecI.rend());
    
    for (vector<int>::iterator itr = vecP.begin() ; itr != vecP.end() ; ++itr)
    {
        cout << (*itr) << endl;
    }
    for (vector<int>::iterator itr = vecI.begin() ; itr != vecI.end() ; ++itr)
    {
        cout << (*itr) << endl;
    }
}

// sort for vector
// sort(vector.begin(), vector.end()) crescente
// sort(vector.rbegin(), vector.rend()) decrescente
// sort(vetor, vetor+N) crescente
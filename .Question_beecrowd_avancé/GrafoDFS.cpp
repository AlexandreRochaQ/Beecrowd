#include <bits/stdc++.h>

using namespace std;

vector<vector<int>>Grafos(200);
bool verif[100] = {false};

void DFS(int x)
{
    for(auto x : Grafos[x])
    {
        if(verif[x] == false)
        {
            verif[x] = true;
            DFS(x);
        }
    }
}

int main()
{
    int a, b, z;
    cin >> z;
    while(z--)
    {
       cin >> a >> b; 
       
        Grafos[a].push_back(b);
        Grafos[b].push_back(a);
    }    
    int N;
    cin >> N;

    DFS(N);

    for(int i=0 ; i < Grafos[a].size() ; i++)
    {
        if(verif[i] == true)
        {
            cout << "pode ir pro = " << i << endl;
        }
    }
}
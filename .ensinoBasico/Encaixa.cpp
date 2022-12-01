#include <bits/stdc++.h>

#define f first
#define s second
#define pb pushback
#define ll long long
#define ii pair<int,int>
#define p push
#define _; ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int main()
{
    int N;
    cin >> N;

    string A, B;
    int TamA, TamB;

   while (N--)
   {
    
    bool verificacao = false;

    cin >> A >> B;
    
    TamA = A.size()-1;
    TamB = B.size()-1;

    if (TamA >= TamB)
    {
        for(int i=TamB ; i !=-1 ; --TamA, i--)
        {
            if (A[TamA] != B[i])
            {
               verificacao = true; 
               break;
            } 
        }
    }
    else
    {
        verificacao = true;
    }

        if (!verificacao)
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    }
}
// Drê :>

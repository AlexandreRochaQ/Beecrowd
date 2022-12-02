#include <bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    int N;

    cin >> N;
    
    cin.ignore();
    while(N--)
    {   
        string frase, aux = "";
        getline(cin, frase);
        vector<string>fraseMain;

        for(int i=0 ; frase[i] ; i++)
        {
            if(frase[i] != ' ')
            {
                aux+=frase[i];
            }
            else
            {
                fraseMain.push_back(aux);
                aux="";
            }
        }
        fraseMain.push_back(aux);

        sort(fraseMain.rbegin(), fraseMain.rend());

        for(int i=0 ; i < fraseMain.size() ; i++)
        {
            if(i==0)
            cout << fraseMain[i];
            else
            cout << ' ' << fraseMain[i];
        }
        cout << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; 
    int casos; cin >> casos; 
    cin.ignore();  

    
    for(int i=0; i<casos; ++i)
    {
        getline(cin, a);
        int aux, j; 

            deque<char>diamantes;
            diamantes.clear();

        for(j=0; a[j]; ++j)
            {
                if(a[j]=='<')
                {
                    diamantes.push_front(a[j]); 
                    break;
                } 
            }
        
        aux = j; int ans=0; 

        if(diamantes.front()=='<')
        {
            for(j=aux+1; a[j]; ++j)
            {
                if(a[j]=='>' && diamantes.front()=='<') 
                {
                    ans++; 
                    diamantes.pop_front(); 
                }
                else if(a[j]=='<') 
                {
                    diamantes.push_front(a[j]); 
                }
            }
        }
        cout << ans << endl;  
    }
}
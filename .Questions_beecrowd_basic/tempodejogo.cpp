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
    int horas2, horas1, minutos1, minutos2;
    int HorasR=0, MinutosR=0;
    
    cin >> horas1 >> minutos1 >> horas2 >> minutos2;

    if (horas1 < horas2 )
    {
        HorasR += horas2 - horas1;
    }
    else
    {
        HorasR += (horas2 - horas1) - 24;
    }
    
    if (minutos1 < minutos2)
    {
        MinutosR = minutos2 - minutos1;
    }
    else
    {
        MinutosR = (minutos2 - minutos1) + 60;

        if (MinutosR == 60)
        {
            MinutosR -= 60;
        }
    }
        if ((HorasR == 24) and (minutos1 < minutos2))
            HorasR = 0;
            
        else if ((HorasR == 1) and (MinutosR == 59))
            HorasR = 0;  

        else if ((HorasR == 24) and (MinutosR == 59))
            HorasR--;      

        else if (HorasR == 24)
            MinutosR = 0;
        
    

    cout <<"O JOGO DUROU "<< HorasR <<" HORA(S) E "<< MinutosR <<" MINUTO(S)" << endl; 
}   
// Drê :>
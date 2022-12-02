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
    string Dia, foda;
    int dias1, dias2, horas1, horas2, minutos1, minutos[1],segundos[0], segundos[1];
    int diaR, horasR, minutosR, segundosR;

    cin  >> Dia;
    cin >> dias1 >>  horas1 >> foda >> minutos1 >> foda >> segundos[0];

    cin  >> Dia;
    cin >> dias2 >>  horas2 >> foda >> minutos[1] >> foda >> segundos[1];

    diaR = dias1 - dias[1];

    horasR = (horas1 - horas2) - 24;

    if (horasR == 24)
    {
        horasR = 0;
        diaR++;
    }

    if (minutos1 <= minutos[1])
    {
        minutosR = minutos[1] - minutos1;
    }
    else
    {
        minutosR = (minutos1 - minutos[1]) - 60;

        if (minutosR == 60)
        {
            minutosR = 0;
            horasR++;
        }
    }
    
    if (segundos[0] <= segundos[1])
    {
        segundosR = segundos[1] - segundos[0];
    }
    else 
    {
        segundosR = (segundos[0] - segundos[1]) - 60;

        if (segundosR == 60)
        {
            segundosR = 0;
            minutosR++;
        }
    }
    cout << diaR << " dia(s)" << endl;
    cout << horasR << " hora(s)" << endl;
    cout << minutosR << " minuto(s)" << endl;
    cout << segundosR << " segundos(s)" << endl;
}

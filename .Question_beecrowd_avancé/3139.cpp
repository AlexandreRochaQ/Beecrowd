#include <bits/stdc++.h>

using namespace std;

int main()
{
    int valorMinimo, valorMaximo;
    double valorDia, vetDia[31], media = 0;

    while(cin >> valorMinimo >> valorMaximo)
    {
        int i, contagem = 0;
        double SomaTotal = 0;

        for(i=1 ; i < 31 ; i++)
        {
            cin >> valorDia;

            vetDia[i] = valorDia;
            SomaTotal += vetDia[i];
        }
        
        for(i=1 ; valorMinimo > valorMaximo ; i++)
        {
            media = ceil(SomaTotal/30.0);
            valorMinimo += media;

            SomaTotal = SomaTotal + (media - vetDia[i]);
            vetDia[i] = media;
            contagem++;
        } 
        cout << contagem << endl;
    }
    
}
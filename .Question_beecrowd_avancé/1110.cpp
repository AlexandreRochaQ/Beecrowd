#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        if(N == 0) break;

        deque<int>cartas, cartasDescartadas;

        bool timer = true;
        int num = 0;
        for(int i=N ; i > 0 ; i--)
        {
            cartas.push_back(i);
        }

        while(cartas.size() > 1)
        {
            if(timer)
            {
                cartasDescartadas.push_back(cartas.back());
                cartas.pop_back();
                timer = false;
            }
            else
            {
               cartas.push_front(cartas.back());
               cartas.pop_back();

               timer = true;
            }
        }
        int i=0;
        cout << "Discarded cards: ";
        while(!cartasDescartadas.empty())
        {
            if(i==0)
            {
                cout << cartasDescartadas.front();
                cartasDescartadas.pop_front();
                i++;
            }
            else
            {
                cout << ", " << cartasDescartadas.front();
                cartasDescartadas.pop_front();
            }
        }
        cout << endl;
        cout << "Remaining card: " << cartas.back() << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;

    while(cin >> N)
    {
        int chave=0, valor=0, count=1;
        bool queueTrue = false, stackTrue = false, priorityTrue=true, impossible=false;
        vector<int>vecUm, vecDois;
        
        for(int i=0 ; i < N ; i++)
        {
            cin >> chave >> valor;

            if(chave == 1)
            {
                vecUm.push_back(valor);
            }
            else
            {
                vecDois.push_back(valor);
            }
        }
        if(vecDois.front() == vecUm.front()) // queue
        {
            impossible = true;
            queueTrue = true;
            count++;
        }
        if(vecDois.back() == vecUm.front()) // stack
        {
            impossible = true;
            stackTrue = true;
            count++;
        }
            sort(vecUm.rbegin(), vecUm.rend());

            for(int i=0 ; i < vecDois.size() ; i++) // priority_queue
            {
                if(vecDois[i] != vecUm[i])
                {
                    priorityTrue = false;
                    count--;
                    break;
                }
            }
            if(priorityTrue == true)
                impossible = true;

        if(impossible == false)
            cout << "impossible" << endl;
        else if(count > 1)
            cout << "not sure" << endl;
        else if(queueTrue == true)
            cout << "queue" << endl;
        else if(stackTrue == true)
            cout << "stack" << endl;
        else if(priorityTrue == true)
            cout << "priority queue" << endl;
    }
}
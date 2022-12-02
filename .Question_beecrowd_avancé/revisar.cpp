#include <bits/stdc++.h>
#include <map>

using namespace std;

int vectordevector(vector<vector<int>> vec)
{
    for(int i=0 ; i < 4 ; i++)
    {
        for(int j=0 ; j < 1 ; j++)
        {
            cout << vec[i][j] << endl;
        } 
    }
}
int main()
{
    vector<vector<int>>vetorzin;

    vetorzin[0].push_back(10);
    vetorzin[1].push_back(20);
    vetorzin[2].push_back(30);
    vetorzin[3].push_back(40);
    
    vectordevector(vetorzin);
}

//*******************
/*
    stack<int>pilha; // top(), pop(), push()
    queue<int>fila; // front(), back(), pop()

    for(int i=10 ; i != 0 ; i--)
    {
        pilha.push(i);
        fila.push(i);
    }
    for(int i=10 ; i != 0 ; i--)
    {
        cout << "pilha = " << pilha.top() << endl;
        cout << "fila = " << fila.front() << endl;

        pilha.pop();
        fila.pop();
    } 
*/
//******************
/*
 100 = "valorMinimo" / 120 = "Valor máximo"

    5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
    5 5 5 5 5 5 5 5 5 5 = 150 = "SomaTotal"

    for()
    Media = SomaTotal/30.0
    // Media vale 5

    for()
    valorMinimo += Media;
    // ValorMinimo = 100 + Media = 5 isso dá 105

    SomaTotal = SomaTotal + (Media-vet[i])
    vet[i] = Media
    ContagemDia++
*/
//*******************
/*
string foda;
    cin >> foda;

    deque<char>teste;

    for(int i=0 ; foda[i] ; i++)
    {
      teste.push_front(foda[i]); 
    }
    if(teste.front() == '+')
    {
        teste.pop_front();
    }
    cout << teste.front() << endl;
    cout << teste.size() << endl;
*/
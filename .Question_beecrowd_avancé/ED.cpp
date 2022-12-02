#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Container class templates

    vector<int>vetor;
    // push back, push front, back, front, pop. Vetor sem numero de casas definidas
    vector<vector<int>>vetor(200);
    // Dá pra colocar outros tipos de ED dentro de um vector.

    pair<int,int>par;
    map<int,int>mapa;
    unordered_map<int,int>MapaSemOrdem;
    // Chave e valor (first, second). pair<char, int> teste('t', 2) ou 
    // map.insert(pair<int, int>('t', 2)); para colocar um valor pair no map.

    stack<int>pilha;
    // top, back, pop. Primeiro a entrar ultimo a sair
    queue<int>fila;
    // front, back, pop. Primeiro a entrar é o primeiro a sair
    priority_queue<int>FilaDePrioridade;
    // Fila de prioridade, sai do maior valor pro menor

    deque<int>deque;
    // push back, push front, pop back, pop front, front, back. Para passar para o próximo valor é necessario apagar ele.
}

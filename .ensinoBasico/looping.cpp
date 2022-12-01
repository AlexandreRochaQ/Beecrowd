#include <bits/stdc++.h>

using namespace std;

int main()
{
  int contador=0, N;

  cin >> N;
  int vet[N];

  for (int i=0 ; i<N ; i++ )
  {
      vet[i] = i;
  }
  for (int i=0 ; i < N ; i++)
  {
      cout << vet[i];

      if (i==N-1)
      {
        i = 0;
        contador++;
      }
      if (contador==3) break;
  }
}
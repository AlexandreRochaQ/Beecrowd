#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, escolha;

	unsigned long long int N[61] = {0, 1};
	
	cin >> T;
	
	for (int j=2 ; j<=60 ; ++j)
	{
		N[j]=N[j-1]+N[j-2];
	}
	
	for (int i=0 ; i<T ; ++i)
	{
		cin >> escolha;
		
		cout << "Fib(" << escolha << ") = " << N[escolha] << endl; 
	}
}
// Dre :>
#include <bits/stdc++.h>

using namespace std;

int contagem(int *vet, int contagem)
{
	
	if (vet[0]%2==0)
	{
		for (int j=0 ; j<contagem ; j++)
		{
			cout << "par[" << j << "] = " << vet[j] << endl;
		}
	}
	else
	{
		for (int j=0 ; j<contagem ; j++)
		{
			cout << "impar[" << j << "] = " << vet[j] << endl;
		}
	}
}
int main() 
{
	int rep, locP=0, locI=0, par[5], impar[5];
	
	for (int i=0 ; i<15 ; i++)
	{
		cin >> rep;
		
		if (rep%2==0) 
		{
			par[locP]=rep;
			++locP;	
				
			if (locP==5) 
			{
				contagem(par, locP);
				locP=0;
			}
		}
		else
		{
			impar[locI]=rep;
			++locI;
			
			if (locI==5) 
			{
				contagem(impar, locI);
				locI=0;
			}
		}
	}
	if (locI!=0) contagem(impar, locI);
	if (locP!=0) contagem(par, locP);
}
// Dre :>

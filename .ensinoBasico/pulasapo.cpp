#include <bits/stdc++.h>

using namespace std; 

	int calculoPmais(int pulo1, int pulo2, int Pulos)
	{

		if (pulo1 <= pulo2)
		{
			return pulo1+Pulos;
		}
		else
		{
			return pulo1-pulo2;
		}
	}

int main()
{
	
	int Pulo, Rounds, jump1, jump2, ans;
	
	bool win;
	
	cin >> Pulo >> Rounds >> jump1 >> jump2;
	
	ans=calculoPmais(jump1, jump2, Pulo);
	
	if (jump1 <= jump2)
	{
		if (ans >= jump2)
		{
		jump1=jump2;
		}
		else
		{
		cout << "GAME OVER\n";
		win=1;
		}
	}
	else 
	{
		if (ans <= Pulo)
		{
		jump1=jump2;
		}
		else
		{
		cout << "GAME OVER\n";
		win=1;
		}
	}
	
	for (int i=2; i<Rounds ; ++i)
	{
		cin >> jump2;
		
		ans=calculoPmais(jump1, jump2, Pulo);
		
		if (jump1 <= jump2)
		{
			
			if (ans >= jump2)
			{
			jump1=jump2;
			}
			else
			{
			cout << "GAME OVER\n";
			win=1;
			break;
			}
		}
		else 
		{
			if (ans <= Pulo)
			{
			jump1=jump2;
			}
			else
			{
			cout << "GAME OVER\n";
			win=1;
			break;
			}
		}
		
		
	}
	
	if (win==0) cout << "YOU WIN" << endl;
}

// Drê :>
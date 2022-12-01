	#include <bits/stdc++.h>
	
	using namespace std;
	
	int Jogadores(int a1, int a2, int a3, int b1)
	{
		int solve;
		
		solve=((a1+a2)/2);
		
		if (a3%2==0) solve+=b1;

        return solve;	
	}
	int main()
	{
	    int A, p1, p2, p3, p4, p5, p6, Dabriel, Guarte;
	    
	    cin >> A;
	    
	    for (int i=0 ; i<A ; ++i)
	    {
	        int bonus;
	        cin >> bonus;
	        
	        cin >> p1 >> p2 >> p3;
	        cin >> p4 >> p5 >> p6;
	        
			Dabriel=Jogadores(p1, p2, p3, bonus);
			Guarte=Jogadores(p4, p5, p6, bonus);
			
	        if (Dabriel > Guarte )
	        {
	            cout << "Dabriel\n";
	        }
	        else
	        {
	            if (Guarte > Dabriel)
	            {
	                cout << "Guarte\n";
	            }
	            else
	            {
	                if (Guarte == Dabriel)
	                {
	                    cout << "Empate" << endl;
	                }
	            }
	        }
	    }
	}
	// Drê :>
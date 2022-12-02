#include <bits/stdc++.h>

#define f first
#define s second
#define pb pushback
#define ll long long
#define ii pair<int,int>
#define p push
#define _; ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int x, y, z;

    while(cin >> x >> y >> z)
    {
        
        int result=0, result1=0, result2=0;
        if(((x*x) + (y*y) == z*z) or ((x*x) + (z*z) == y*y) or ((y*y) + (z*z) == y*y))
        {
            result = gcd(x, z);
            result1 = gcd(y, z);
            result2 = gcd(x, y);

            if (result == 1 and result1 == 1 and result2 == 1)
               cout << "tripla pitagorica primitiva" << endl;
            else cout << "tripla pitagorica" << endl;
        }
        else
        {
            cout << "tripla" << endl;
        }
    }
}
// Drê :>

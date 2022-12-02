/*

vector<vector<int>>g(10); 
    int n; 
    cin >> n; 
    for(int i = 0; i<n; ++i)
    {
        g[i].push_back(i); 
        g[i].push_back(2); 
        if(i==0) g[i].push_back(3);
    } 
    for(int i=0; i<n; ++i)
    {
        cout << g[i][0] << endl; 
        cout << g[i][1] << endl; 
        if(i==0) cout << g[i][2] << endl; 
        cout << "troquei de casinha" << endl; 
    }

*/
/*

map<int, int>g;
    int n; cin >> n; 
    for(int i =n; i>=0; i--)
    {
        g[i]=2; 
    } 
    for(map<int, int>::iterator it=g.begin(); it!=g.end(); ++it)
    {
        int x, y; 
        x = it->first;
        y = it->second; 
        cout << x << ' ' << y << endl;
    }

*/
/*
int main()
{
    list<int>listaNumeros; 
    for(int i = 1; i<=10; ++i)
    {
        listaNumeros.push_back(i10); 
    }
    list<int>::iterator it;
    it = listaNumeros.begin();
    // 10<- 20 30 40 50 60 70 80 90 100
    it++; 
    // 10 20<- 30 40 50 60 70 80 90 100
    listaNumeros.insert(it, 15); 
    it--; 
    listaNumeros.erase(it); 
    for(list<int>::iterator itNew=listaNumeros.begin(); itNew!=listaNumeros.end(); ++itNew)
    {
        cout <<itNew << ' '; 
    }
}

*/



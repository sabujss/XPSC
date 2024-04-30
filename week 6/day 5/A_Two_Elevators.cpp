#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,z;
    cin>>x>>y>>z;
    int dif=(x-1);
    int dif1=abs(y-z)+abs(z-1);
    if(dif<dif1)
    {
        cout<<1<<endl;
    }
    else if(dif>dif1)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<3<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
    return 0;
}
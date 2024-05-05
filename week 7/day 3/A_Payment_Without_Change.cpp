#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    if(s%n<=b && 1LL*a*n+b>=s)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
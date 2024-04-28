#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int mx=0;
    int mn=-1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mx|=x;
        mn&=x;
    }
    cout<<mx-mn<<endl;
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
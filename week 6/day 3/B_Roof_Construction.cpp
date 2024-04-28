#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a=1;
    while(a*2<=n-1)
    {
        a*=2;
    }
    for(int i=n-1;i>=a;i--)
    {
        cout<<i<<" ";
    }
    for(int i=0;i<a;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
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
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    vector <int> v(1001,0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        v[x]=i;
    }
    int mx=-1;
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(v[i]&&v[j]&&__gcd(i,j)==1)
            {
                mx=max(mx,(v[i]+v[j]));
            }
        }
    }
    cout<<mx<<endl;
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
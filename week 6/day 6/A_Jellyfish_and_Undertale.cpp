#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll sum=b;
    if(a<=b)
    {
        sum=a;
        b=a;
    }
    else sum=b;
    for(int i=0;i<n;i++)
    {
        if(v[i]+1<=a)
        {
            sum+=v[i];
        }
        else
        {
            sum+=a-1;
        }
    }
    cout<<sum<<endl;
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
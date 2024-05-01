#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <long long int> v(n);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<0)
        cnt++;
    }
    long long int sum=0;
    long long int mn=1e18;
    for(int i=0;i<n;i++)
    {
        sum+=abs(v[i]);
        mn=min(mn,abs(v[i]));
    }
    if(cnt%2==0)
    {
       cout<<sum<<endl;
    }
    else
    {
        cout<<sum-(2LL*mn)<<endl;
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
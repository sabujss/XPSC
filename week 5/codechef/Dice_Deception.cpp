#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=7-v[i];
        if(v[i]<x && k>0)
        {
            sum+=x;
            k--;
        }
        else
        {
            sum+=v[i];
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
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    ll k;
    cin>>n>>k;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    ll sum=0;
    int l=0,r=0;
    int ans=INT_MAX;
    while(r<n)
    {
        sum+=v[r];
        while(sum>=k)
        {
            ans=min(ans,r-l+1);
            sum-=v[l];
            l++;
        }
        r++;
    }
    if(ans==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0;
}
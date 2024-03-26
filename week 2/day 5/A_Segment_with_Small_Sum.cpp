#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    ll s;
    cin>>n>>s;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0,l=0,r=0;
    ll sum=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans=max(ans,(r-l+1));
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    } 
    cout<<ans<<endl;
    return 0;
}
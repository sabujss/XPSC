#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        map <int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i]]++;
        }
        int mx=0;
        for(auto i:mp)
        {
            mx=max(mx,i.second);
        }
        int ans=0;
        while(mx<n)
        {
            int remain=n-mx;
            int can=mx;
            ans++;
            ans+=min(can,remain);
            mx+=min(can,remain);
        }
        cout<<ans<<endl;
    } 
    return 0;
}
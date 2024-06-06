#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map <int,int> m;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<=sqrt(v[i]);j++)
        {
            if(v[i]%j==0)
            {
                m[j]++;
            }
            while(v[i]%j==0)
            {
                v[i]/=j;
            }
        }
        if(v[i]>1)
        {
            m[v[i]]++;
        }
    }  
    int ans=1;
    for(auto x:m)
    {
        ans=max(ans,x.second);
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
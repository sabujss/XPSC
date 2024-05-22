#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    vector <int> a(n),b;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        if(b.empty() || b.back()>y)
        {
            b.push_back(y);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(auto x:b)
        {
            if(a[i]%(1<<x)==0)
            {
                a[i]+=(1<<(x-1));
            }
        }
    }
    for(auto i:a)
    {
        cout<<i<<" ";
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
        cout<<endl;
    } 
    return 0;
}
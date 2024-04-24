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

    int x=0;
    for(int i=0;i<n;i++)
    {
        x^=v[i];
    }
    
    int y=0;
    for (int i=0;i<n;i++) 
    {
        int val=v[i]^x;
        y^=val;
    }

    if(y==0)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
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
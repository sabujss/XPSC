#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    bool flag=false;
    for(int i=1;i<=n;i++)
    {
        bool ok=false;
        for(int j=2;j<=i+1;j++)
        {
            if(v[i]%j!=0)
            {
               ok=true;
               break;
            }
        }
        if(ok==false)
        {
            flag=true;
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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
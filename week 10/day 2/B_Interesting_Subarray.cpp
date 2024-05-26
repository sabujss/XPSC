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
    bool flag=false;
    for(int i=1;i<n;i++)
    {
        if(abs(v[i]-v[i-1])>=2)
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<endl;
            flag=true;
            return;
        }
    }
    if(!flag)
    {
        cout<<"NO"<<endl;
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
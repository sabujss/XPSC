#include <bits/stdc++.h>
#define ll long long
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
    ll neg=0;
    ll pos=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=0)
        {
            pos+=v[i];
        }
        else
        {
            if(pos+v[i]>=0)
            {
                pos+=v[i];
            }
            else
            {
                v[i]+=pos;
                pos=0;
                neg+=v[i];
            }
        }
    }
    cout<<pos<<endl;
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
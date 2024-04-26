#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    ll cnt=1;
    ll x_or=v[0];;
    for(int i=1;i<n;i++)
    {
        if(v[i]<=x_or)
        {
            x_or^=v[i];
        }
        else
        {
            x_or=v[i];
            cnt++;
        }
    }
    cout<<cnt<<endl;

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
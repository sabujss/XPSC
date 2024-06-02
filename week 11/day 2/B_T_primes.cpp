#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool is_prime(ll x)
{
    if(x==1)
    {
        return false;
    }

    for(int i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}

bool square(ll x)
{
    ll y=sqrtl(x);
    return ((y*y)==x);
}
void solve()
{
    int n;
    cin>>n;
    vector <ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(is_prime(sqrtl(v[i])) && square(v[i]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
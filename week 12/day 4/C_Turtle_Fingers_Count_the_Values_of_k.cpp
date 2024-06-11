#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector <ll> divisors(ll n)
{
    vector <ll> v;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                v.push_back(i);
            }
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }
    return v;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,l,cnt=0,cmp;
        cin>>a>>b>>l;
        vector <ll> k=divisors(l);
        vector <ll> x,y;
        for(ll i=0;i<=20;i++)
        {
            cmp=pow(a,i);
            if(cmp<=1e6)
            {
                x.push_back(cmp);
            }
            else
            {
            break;
            }
        }
        for(ll i=0;i<=20;i++)
        {
            cmp=pow(b,i);
            if(cmp<=1e6)
            {
                y.push_back(cmp);
            }
            else
            {
               break;
            }
        }
        for(ll i=0;i<(ll)k.size();i++)
        {
            ll flag=0;
            for(ll j=0;j<(ll)x.size();j++)
            {
                for(ll n=0;n<(ll)y.size();n++)
                {
                    if((k[i]*x[j]*y[n])==l)
                    {
                        cnt++;
                        flag=1;
                        break;
                    }
                }
                if(flag)
                break;
            }
        }
        cout<<cnt<<endl;
    } 
    return 0;
}
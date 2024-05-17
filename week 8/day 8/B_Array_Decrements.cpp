#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> a(n),b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int diff=-1,z_diff=-1;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(b[i]>a[i])
        {
            flag=true;
            break;
        }
        if(b[i]!=0)
        {
            if(diff==-1)
            {
                diff=a[i]-b[i];
            }
            else
            {
                if(a[i]-b[i]!=diff)
                {
                    flag=true;
                    break;
                }
            }
        }
        else
        {
            z_diff=max(z_diff,a[i]);
        }
    }
    if(flag)
    {
        cout<<"NO"<<endl;
    }
    else if(diff==-1 || z_diff<=diff)
    {
        cout<<"YES"<<endl;
    }
    else
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
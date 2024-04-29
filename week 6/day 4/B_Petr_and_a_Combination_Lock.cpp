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
    for(int i=0;i<(1<<n);i++)
    {
        int sum=0;
        for(int bits=0;bits<n;bits++)
        {
            if(i&(1<<bits))
            {
                sum+=v[bits];
            }
            else
            {
                sum-=v[bits];
            }
        }

        if(sum%360==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
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
    
    solve(); 
    return 0;
}
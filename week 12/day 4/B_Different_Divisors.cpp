#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    vector <bool> pri(1e6+1,true);
    pri[1]=false;
    for(int i=2;i*i<=1e6;i++)
    {
        if(pri[i])
        {
            for(int j=i+i;j<=1e6;j+=i)
            {
                pri[j]=false;
            }
        }
    }
    
    int t;
    cin>>t;
    while(t--)
    {
        ll d;
        cin>>d;
        ll ans=1,j=-1;
        for(int i=1;i<=1e6;i++)
        {
            if(pri[i])
            {
                if(i-1>=d)
                {
                    ans*=i;
                    j=i;
                    break;
                }
            }
        }
        for(int i=1;i<=1e6;i++)
        {
            if(pri[i])
            {
                if(i-j>=d)
                {
                    ans*=i;
                    j=i;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    } 
    return 0;
}
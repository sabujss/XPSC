#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector <int> v(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        
        }
        vector <long long int> pre(n+1,0);
        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+v[i];
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            long long int sum=pre[n];
            sum-=pre[r]-pre[l-1];
            sum+=((r-l+1LL)*k);
            if(sum%2LL!=0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
    } 
    return 0;
}
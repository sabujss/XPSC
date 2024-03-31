#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector <ll> x;
        int change=0;
        ll total=0;
        for(int i=0;i<n;i++)
        {
            int L=i;
            int R=n-1-i;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    change++;
                    total+=R;
                    x.push_back(R-L);
                }
                else
                {
                    total+=L;
                }
            }
            else
            {
                if(L>R)
                {
                    change++;
                    total+=L;
                    x.push_back(L-R);
                }
                else
                {
                    total+=R;
                }
            }
        }
        vector <ll> ans(n+1);
        for(int i=change;i<=n;i++)
        {
            ans[i]=total;
        }
        sort(x.begin(),x.end(),greater<ll>());
        for(int i=change-1;i>=1;i--)
        {
            total-=x.back();
            x.pop_back();
            ans[i]=total;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}
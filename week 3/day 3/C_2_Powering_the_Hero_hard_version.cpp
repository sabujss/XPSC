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
        vector <ll> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        priority_queue <ll> pq;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<ans<<endl;
    } 
    return 0;
}
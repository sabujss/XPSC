#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    vector <int> p(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        p[i]=sum;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
        cin>>x;
        auto it=lower_bound(p.begin(),p.end(),x);
        int ans=it-p.begin();
        cout<<ans+1<<endl;
    }
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
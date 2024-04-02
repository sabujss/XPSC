#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k;
    cin>>n>>k;
    vector <int> v(n);
    map <int,vector <int>> idx;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        idx[v[i]].push_back(i);
    }
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;

        if(idx[a].empty() || idx[b].empty())
        {
            cout<<"NO"<<endl;
        }
        else if(a==b)
        {
            cout<<"YES"<<endl;
        }
        else if(idx[a].front() < idx[b].back())
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
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
    return 0;
}
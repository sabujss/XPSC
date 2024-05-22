#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    vector <int> cp,sm;
    vector <bool> f(n+1,true);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='b')
        {
            if(!sm.empty())
            {
                f[sm.back()]=false;
                sm.pop_back();
            }
            f[i]=false;
        }
        else if(s[i]=='B')
        {
            if(!cp.empty())
            {
                f[cp.back()]=false;
                cp.pop_back();
            }
            f[i]=false;
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            cp.push_back(i);
        }
        else
        {
            sm.push_back(i);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(f[i])
        {
            cout<<s[i];
        }
    }
    cout<<endl;
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
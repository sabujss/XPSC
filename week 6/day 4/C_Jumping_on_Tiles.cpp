#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    map <char,vector <int>> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]].push_back(i+1);
    }
    
    if(s[0]>s[n-1])
    {
        int cst=abs(s[0]-s[n-1]);
        vector <int> path;
        for(int i=0;s[0]+i>=s[n-1];i--)
        {
            char c=s[0]+i;
            if(mp.find(c)!=mp.end())
            {
                for(auto x:mp[c])
                {
                    path.push_back(x);
                }
            }
        }

        cout<<cst<<" "<<path.size()<<endl;
        for(auto y:path)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    else if(s[0]<s[n-1])
    {
        int cst=abs(s[0]-s[n-1]);
        vector <int> path;
        for(int i=0;s[0]+i<=s[n-1];i++)
        {
            char c=s[0]+i;
            if(mp.find(c)!=mp.end())
            {
                for(auto x:mp[c])
                {
                    path.push_back(x);
                }
            }
        }
        cout<<cst<<" "<<path.size()<<endl;
        for(auto y:path)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"0"<<" "<<mp[s[0]].size()<<endl;
        for(auto y:mp[s[0]])
        {
            cout<<y<<" ";
        }
        cout<<endl;
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
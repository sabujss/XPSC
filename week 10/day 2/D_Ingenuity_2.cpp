#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='N') y++;
        else if(s[i]=='S') y--;
        else if(s[i]=='E') x++;
        else x--;
    }
    if(abs(x)%2!=0 || abs(y)%2!=0)
    cout<<"NO"<<endl;
    else if(n==2 && x==0 && y==0)
    cout<<"NO"<<endl;
    else
    {
        int n_ax=0,s_ax=0,e_ax=1,w_ax=1;
        char a[2]={'R','H'};
        string ans="";
        for(auto i:s)
        {
            if(i=='N')
            {
                ans+=a[n_ax];
                n_ax=1-n_ax;
            }
            else if(i=='S')
            {
                ans+=a[s_ax];
                s_ax=1-s_ax;
            }
            else if(i=='E')
            {
                ans+=a[e_ax];
                e_ax=1-e_ax;
            }
            else
            {
                ans+=a[w_ax];
                w_ax=1-w_ax;
            } 
        }
        cout<<ans<<endl;
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
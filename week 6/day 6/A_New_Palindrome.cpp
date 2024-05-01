#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    int ans=0;
    if(n%2==0 && n>2)
    {
        for(int i=1;i<n/2;i++)
        {
           if(s[i]!=s[i-1])
           {
             ans++;
             break;
           }
        }
    }
    else if(n%2!=0 && n>3)
    {
        for(int i=1;i<n/2;i++)
        {
            if(s[i]!=s[i-1])
            {
             ans++;
             break;
            }
        }
    }
    if(ans==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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
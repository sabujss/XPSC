#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3]!='0'))
        {
            int num=(s[i]-'0')*10+(s[i+1]-'0');
            ans.push_back((char)(96+num));
            i=i+2;
        }
        else
        {
            int num=s[i]-'0';
            ans.push_back((char)(96+num));
        }
    }
    cout<<ans<<endl;
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
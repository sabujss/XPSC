#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int cnt_1=0;
    int cnt_0=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            cnt_1++;
        }
        else
        {
            cnt_0++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            if(cnt_0>0)
            cnt_0--;
            else
            break;
        }
        else
        {
            if(cnt_1>0)
            cnt_1--;
            else
            break;
        }
    }
    cout<<cnt_1+cnt_0<<endl;
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
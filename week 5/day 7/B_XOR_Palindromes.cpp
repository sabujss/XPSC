#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=n-1,cnt1=0,cnt2=0;
    while(l<r)
    {
        if(s[l]==s[r])
        {
            cnt1+=2;
        }
        else
        {
            cnt2++;
        }
        l++;
        r--;
    }
    string ans="";
    for(int i=0;i<=n;i++)
    {
        int total=i;
        total-=cnt2;
        if(total<0)
        {
            ans.push_back('0');
            continue;
        }
        total=max(total%2  ,total-cnt1);
        total=max(0,total-(n%2));
        if(total==0)
        {
            ans.push_back('1');
        }
        else
        {
            ans.push_back('0');
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
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=1e9;
    for(char i='a';i<='z';i++)
    {
        int cng=0,l=0,r=n-1;
        while(l<=r)
        {
            if(s[l]!=s[r])
            {
                if(s[l]==i)
                {
                    l++;
                    cng++;
                }
                else if(s[r]==i)
                {
                    r--;
                    cng++;
                }
                else
                {
                    cng=1e9;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        ans=min(ans,cng);
    }
    if(ans==1e9)
    {
        cout<<-1<<endl;
    }
    else
    {
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
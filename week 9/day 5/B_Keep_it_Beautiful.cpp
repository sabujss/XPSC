#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> a(n),b;
    string ans="";
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(b.empty())
        {
            b.push_back(a[i]);
            ans.push_back('1');
        }
        else
        {
            if(flag)
            {
                if(a[i]<b.back())
                {
                    ans.push_back('0');
                }
                else
                {
                    if(a[i]>b[0])
                    {
                       ans.push_back('0'); 
                    }
                    else
                    {
                        ans.push_back('1');
                        b.push_back(a[i]);
                    }
                }
            }
            else
            {
                if(a[i]>=b.back())
                {
                   ans.push_back('1');
                   b.push_back(a[i]); 
                }
                else
                {
                    if(a[i]>b[0])
                    {
                        ans.push_back('0');
                    }
                    else
                    {
                        flag=true;
                        ans.push_back('1');
                        b.push_back(a[i]);
                    }
                }
            }
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
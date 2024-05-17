#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            cnt++;
        }
        else
        {
            cnt2++;
        }
    }
    int pair=min(cnt,cnt2);
    if(pair%2==0)
    {
        cout<<"Ramos"<<endl;
    }
    else
    {
        cout<<"Zlatan"<<endl;
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

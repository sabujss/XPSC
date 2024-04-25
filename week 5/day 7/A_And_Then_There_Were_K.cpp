#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int ans=1;
    while(true)
    {
        if(ans*2>n)
        {
            cout<<ans-1<<endl;
            break;
        }
        ans*=2;
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
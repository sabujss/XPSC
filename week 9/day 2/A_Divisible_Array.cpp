#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<(i*2)<<" ";
    }
    cout<<endl;
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
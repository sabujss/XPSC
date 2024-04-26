#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    int cnt=0;
    while((1<<cnt) <=x)
    {
        cnt++;
    }
    int a=1<<(cnt-1);
    int b=a^x;
    cout<<b<<" "<<a<<endl; 
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
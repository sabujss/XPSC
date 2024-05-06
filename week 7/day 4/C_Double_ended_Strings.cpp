#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    int x=a.size();
    int y=b.size();
    int lcs=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            int l=i,r=j;
            int lgt=0;
            while(l<x && r<y && a[l]==b[r])
            {
                lgt++;
                l++;
                r++;
            }
            lcs=max(lcs,lgt);
        }
    }
    cout<<x-lcs+y-lcs<<endl;
    
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
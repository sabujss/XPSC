#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        int x;
        cin>>x;
        int l=0,r=n-1,mid=0,idx=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(x>=a[mid])
            {
                idx=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(idx==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<idx+1<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int diff=a[i]-(i+1);
            mx=max(diff,mx);
        }
        cout<<mx<<endl;
        
    }
    return 0;
}
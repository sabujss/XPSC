#include <bits/stdc++.h>
using namespace std;

int a[205][205];

long long int solve(int i,int j,int n ,int m)
{
    int index=0;
    long long int res=0;
    while(i-index>=0 && j-index>=0)
    {
        res+=a[i-index][j-index];
        index++;
    }
    index=0;
    while(i-index>=0 && j+index<m)
    {
        res+=a[i-index][j+index];
        index++;
    }
    index=0;
    while(i+index<n && j+index<m)
    {
        res+=a[i+index][j+index];
        index++; 
    }
    index=0;
    while(i+index<n && j-index>=0)
    {
        res+=a[i+index][j-index];
        index++; 
    }
    return res-(3*a[i][j]);
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,solve(i,j,n,m));
            }
        }
        cout<<ans<<endl;
    } 
    return 0;
}
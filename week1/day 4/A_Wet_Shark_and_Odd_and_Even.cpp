#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    } 
    if(sum%2==0)
    {
        cout<<sum<<'\n';
    }
    else
    {
       long long int mn=1e18;
       for(int i=0;i<n;i++)
       {
        if(a[i]%2==1)
        {
           mn=min(mn,a[i]);
        }
       } 
       cout<<sum-mn<<endl;
    }
    return 0;
}
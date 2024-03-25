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
        int n,m;
        cin>>n>>m;
        vector <string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int mn=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=0;
                for(int k=0;k<m;k++)
                {
                    sum+=abs(v[i][k]-v[j][k]);
                }
                mn=min(mn,sum);  
            }
        }
        cout<<mn<<endl;
    } 
    return 0;
}
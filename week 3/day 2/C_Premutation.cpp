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
        int a[n][n-1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        map <int,int> mp;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            mp[a[i][n-2]]++;
        }
        for(auto k:mp)
        {
            if(k.second==1)
            {
                x=k.first;
            }
            else
            {
                y=k.first;
            }
        }
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[i][n-2]==x)
                {
                    v.push_back(a[i][j]);
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<y<<endl;

    } 
    return 0;
}
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
        vector <int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector <string> a;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            string s;
            cin>>s; 
            a.push_back(s);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<a[i].size();j++)
            {
                if(a[i][j]=='D')
                {
                    if(v[i]<9)
                    {
                        v[i]=v[i]+1;
                    }
                    else if(v[i]==9)
                    {
                        v[i]=0;
                    }
                }
                else if(a[i][j]=='U')
                {
                    if(v[i]>0)
                    {
                       v[i]=v[i]-1;
                    }
                    else if(v[i]==0)
                    {
                        v[i]=9;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    } 
    return 0;
}
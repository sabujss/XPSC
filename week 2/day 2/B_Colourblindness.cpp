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
        vector <string> v;
        for(int i=0;i<2;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]=='G')
                {
                    v[i][j]='B';
                }
                
            }
        }
        bool flag=true;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[0][j]!=v[1][j])
                {
                    flag=false;
                    break;
                }
                
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}
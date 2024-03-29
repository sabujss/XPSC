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
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]<90)
            {
                s[i]=s[i]+32;
            }
        }
        string ss="";
        for(int i=0;i<n;i++)
        {
            if(ss[ss.size()-1]!=s[i])
            {
                ss.push_back(s[i]);
            }
        }
        if(ss=="meow")
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
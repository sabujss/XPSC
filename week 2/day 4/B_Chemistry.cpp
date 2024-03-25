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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map <char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        int cnt=0;
        for(auto i:m)
        {
            if(i.second%2!=0)
            {
                cnt++;
            }
        }
        if(cnt-1<=k  && k<=n)
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
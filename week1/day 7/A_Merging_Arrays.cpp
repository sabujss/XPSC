#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    vector <int> a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int l=0,r=0;
    vector <int> s;
    while(r<m || l<n)
    {
        if(l>=n)
        {
            s.push_back(b[r]);
            r++;
        }
        else if(r>=m)
        {
            s.push_back(a[l]);
            l++;
        }
        else if(b[r]>a[l])
        {
            s.push_back(a[l]);
            l++;
        }
        else
        {
            s.push_back(b[r]);
            r++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
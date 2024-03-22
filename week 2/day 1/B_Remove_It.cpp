#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector <int> v(n);
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];   
    } 
    for(int i=0;i<n;i++)
    {
       if(v[i]!=x)
       {
          a.push_back(v[i]);
       }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
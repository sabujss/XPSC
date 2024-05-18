#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int tc;
    cin>>tc;
    while(tc--)
    {
       int n;
       cin>>n;
       vector <int> a(n);
       map<int,int>x,y;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           x[a[i]]++;
       }
       vector<int>v;
       for(auto it:x)
       {
           int k=it.first;
           int l=it.second;
           if(k<=n)
           {
               for(int i=1;i<l;i++)
               v.push_back(k);
               y[k]=1;
           }
           else
           {
            for(int i=1;i<=l;i++)
            v.push_back(k);
           }
       }
       int cnt=1;
       int ans=0;
      for(int i=0;i<v.size();i++)
      {
          for(int j=cnt;j<=n;j++)
          {
              if(y[j]==1)cnt++;
              else break;
          }
          int p=(v[i]-1)/2;
          if(cnt<=p)
          {
              cnt++;
              ans++;
          }
          else
          {
              ans=-1;
              break;
          }
      }
      cout<<ans<<endl;
 
    } 
    return 0;
}
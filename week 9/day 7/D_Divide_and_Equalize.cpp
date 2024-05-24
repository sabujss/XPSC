#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map <int,int> cnt;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                while(a[i]%j==0)
                {
                    cnt[j]++;
                    a[i]/=j;
                }
            }
        }
        if(a[i]>1)
        {
          cnt[a[i]]++;
        }
    }

    bool flag=true;

    for(auto x:cnt)
    {
        if(x.second%n!=0)
        {
            flag=false;
            break;
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

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    } 
    return 0;
}
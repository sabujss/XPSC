#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll sum=0;
    int op=0;
    int negi=0;
    for(int i=0;i<n;i++)
    {
        sum+=abs(v[i]);
        if(v[i]<0)
        {
            if(negi==0)
            {
                op+=1;
                negi=1;
            }
        }
        else
        {
            if(v[i]>0)
            negi=0;
        }
        
    }
    cout<< sum <<" "<<op<<endl;
    
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
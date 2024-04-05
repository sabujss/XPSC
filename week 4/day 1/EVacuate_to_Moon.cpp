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
        int n,m,h;
        cin>>n>>m>>h;
        vector <int> c(n),p(m);
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>p[i];
        }
        sort(c.begin(),c.end(),greater <int>());
        sort(p.begin(),p.end(),greater <int>());
        long long int sum=0;
        for(int i=0;i<min(n,m);i++)
        {
            sum+=min(1LL*c[i],(1LL*p[i]*h));
        }
        cout<<sum<<endl;
    } 
    return 0;
}
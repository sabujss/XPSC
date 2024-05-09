#include <bits/stdc++.h>
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
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        auto low=lower_bound(v.begin(),v.end(),x);
        auto high=upper_bound(v.begin(),v.end(),x);
        int l=low-v.begin();
        int r=high-v.begin();
        if(l==0)
        {
            cout<<"X"<<" "; 
        }
        else
        {
            cout<<v[l-1]<<" "; 
        }
        if(r==n)
        {
            cout<<"X"<<endl;
        }
        else
        {
            cout<<v[r]<<endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
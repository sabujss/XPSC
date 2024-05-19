#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <char> v={'a','b','c'};
    vector <char> ans(n);
    ans[0]=v[0];
    ans[1]=v[0];
    for(int i=2;i<n;i++)
    {
        if(ans[i-1]=='a' && ans[i-2]=='a')
        {
            ans[i]=v[1];
            ans[i+1]=v[1];
            i++;
        }
        else if(ans[i-1]=='b' && ans[i-2]=='b')
        {
            ans[i]=v[0];
            ans[i+1]=v[0];
            i++;
        }
        
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
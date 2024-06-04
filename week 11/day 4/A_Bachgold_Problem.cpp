#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector <int> v;
    if(n%2==0)
    {
        int cnt=n/2;
        cout<<cnt<<endl;
        for(int i=0;i<cnt;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else
    {
        int cnt=(n/2);
        cout<<cnt<<endl;
        for(int i=0;i<(cnt-1);i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    solve(); 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    if(a>t)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int x=(t+0.5)/a;
        cout<<x*b<<endl;
    }
    return 0;
}
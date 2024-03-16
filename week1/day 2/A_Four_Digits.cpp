#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n;
    int cnt=0;
    while(x!=0)
    {
        x=x/10;
        cnt++;   
    }
    if(n==0)
    {
        cout<<"0000"<<endl;
    }
    else if(cnt==1)
    {
        cout<<"000"<<n<<endl;
    }
    else if(cnt==2)
    {
        cout<<"00"<<n<<endl;
    }
    else if(cnt==3)
    {
        cout<<"0"<<n<<endl;;
    }
    else
    {
        cout<<n<<endl;
    }
    return 0;
}
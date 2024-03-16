#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int flag=false;
    int x=0;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            flag=true;
            x=i;
            break;
        }
    }
    if(flag==true)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
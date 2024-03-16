#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int flag=false;
    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            if((i*a)+(j*b)==c)
            {
                flag=true;
                break;
            }
        }
    }
    if(flag)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
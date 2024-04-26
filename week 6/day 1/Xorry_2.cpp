#include <iostream>
using namespace std;

void solve() 
{
   int x;
    cin>>x;
    int a=1,b=0,cnt=0;
    while(a*2<=x)
    {
        a*=2;
        cnt++;
    }
    int ans=1;
    bool flag=false;
    for(int i=cnt-1;i>=0;i--)
    {
        if((x>>i)&1)
        {
            b|=(1<<i);
            flag=true;
        }
        else
        {
            if(flag)
            {
                ans*=2;
            }
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t; 
    while (t--) 
    {
        solve();
    }

    return 0;
}

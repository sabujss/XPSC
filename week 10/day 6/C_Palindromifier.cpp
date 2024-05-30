#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    string x=s;
    reverse(x.begin(),x.end());
    if(s==x)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<3<<endl;
        cout<<"R"<<" "<<n-1<<endl;
        cout<<"L"<<" "<<n<<endl;
        cout<<"L"<<" "<<2<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    
    solve();
    return 0;
}
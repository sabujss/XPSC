#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    if(a[a.size()-1] == b[b.size()-1]) 
    {
        if(a.size() > b.size())
        {
            if(a[a.size()-1] == 'S') 
            {
                cout<<"<"<<endl;
            } 
            else 
            {
                cout<<">"<<endl;
            }
        }
        else if(a.size() < b.size()) 
        {
            if(a[a.size()-1] == 'S') 
            {
                cout<<">"<<endl;
            } 
            else
            {
                cout<<"<"<<endl;
            }
        }
        else
        { 
            cout<<"="<<endl;
        }

        }
        else
        {
            int A = a[a.size()-1] == 'S' ? 1 : a[a.size()-1] == 'M' ? 2 : 3;
            int B = b[b.size()-1] == 'S' ? 1 : b[b.size()-1] == 'M' ? 2 : 3;
            if(A > B) cout<<">"<<endl;
            else if(A < B)
            cout<<"<"<<endl;
            else 
            cout<<"="<<endl;
        }
}

int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set <int> s;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int p=n-s.size();
        if(p%2==1)
        {
            cout<<s.size()-1<<endl;
        }
        else
        {
            cout<<s.size()<<endl;
        }
    } 
    return 0;
}
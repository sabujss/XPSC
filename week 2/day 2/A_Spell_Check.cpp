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
        string s,k;
        cin>>s;
        k="Timur";
        sort(s.begin(),s.end());
        sort(k.begin(),k.end());
        if(s==k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}
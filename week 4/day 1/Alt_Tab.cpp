#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    cin>>n;
    stack <string> st;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        st.push(s);
    } 
    set <string> ans;
    while(!st.empty())
    {
        if(ans.find(st.top())==ans.end())
        {
        ans.insert(st.top());
        string ss=st.top();
        if(ss.size()>2)
        {
            cout<<ss.substr(ss.size()-2);
        }
        }
        st.pop();
    }
    return 0;
}
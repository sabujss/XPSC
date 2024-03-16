#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.size();i++)
    {
        count[s[i]-'a']++;
    }
    int flag=false;
    char smallest='a';
    for(int i=0;i<26;i++)
    {
        if(count[i]==0)
        {
            smallest=i+'a';
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<smallest<<endl;
    }
    else
    {
        cout<<"None"<<endl;
    }
    return 0;
}
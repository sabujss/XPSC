#include <bits/stdc++.h>
using namespace std;

bool solve(vector <int> v)
{
    int i=0,j=v.size()-1;
    bool flag=true;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
           flag=false;
           break;  
        }
        i++;
        j--;
    }
    return flag;
}

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
        vector <int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int i=0,j=n-1;
        bool flag=true;
        int a,b;
        while(i<j)
        {
            if(v[i]!=v[j])
            {
                flag=false;
                a=v[i];
                b=v[j];
                break;
            }
            i++;
            j--;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            vector <int> x,y;
            for(int i=0;i<n;i++)
            {
                if(v[i]!=a)
                {
                    x.push_back(v[i]);
                }
                if(v[i]!=b)
                {
                    y.push_back(v[i]);
                }
            }
                bool ans1=solve(x);
                bool ans2=solve(y);
                if(ans1 || ans2)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
        }

    } 
    return 0;
}
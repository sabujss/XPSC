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
        map <string,int> mp;
        vector <string> a[3];
        for(int i=0;i<3;i++)
        {
            a[i].resize(n);
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                mp[a[i][j]]++;
            }
        }
        int point[3]={0};
        for(int i=0;i<3;i++)
        {
            a[i].resize(n);
            for(int j=0;j<n;j++)
            {
                if(mp[a[i][j]]==1)
                {
                    point[i]+=3;
                }
                else if(mp[a[i][j]]==2)
                {
                    point[i]+=1;
                }
            }
        }
        cout<<point[0]<<" "<<point[1]<<" "<<point[2]<<'\n';
        
    } 
    return 0;
}
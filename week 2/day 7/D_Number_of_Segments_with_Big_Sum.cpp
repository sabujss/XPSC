#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n;
    long long int s;
    cin>>n>>s;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    } 
    int l=0,r=0;
    long long int sum=0,cnt=0;
    while(r<n)
    {
        sum+=v[r];
        while(sum>=s && l<=r)
        {
            cnt+=n-r;
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<cnt<<endl;
    return 0;
}
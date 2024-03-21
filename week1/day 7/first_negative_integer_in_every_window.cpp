vector<long long> printFirstNegativeInteger(long long int a[],long long int n, long long int k) 
{
    long long int r=0,l=0,sum=0;
    vector <long long int> v;
    vector <long long int> ans;
    while(r<n)
    {
      
      if(a[r]<0)
      {
      v.push_back(a[r]);
      }
      if(r-l+1==k)
      {
         if(!v.empty() && v[0]==a[l])
         {
            ans.push_back(v[0]);
            v.erase(v.begin());
         }
         else if(!v.empty() && v[0]!=a[l])
         {
             ans.push_back(v[0]);
         }
         else
         {
             ans.push_back(0);
         }
         l++;
         r++;
      }
      else
      {
      r++;
      }
    }
    return ans;
 }
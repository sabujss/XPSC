
long maximumSumSubarray(int k, vector<int> &a , int n)
    {
       int l=0,r=0;
       long long int sum=0,ans=0;
       while(r<n)
       {
           sum+=a[r];
           if(r-l+1==k)
           {
               ans=max(sum,ans);
               sum-=a[l];
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

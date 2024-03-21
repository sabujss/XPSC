	int search(string p, string s) {
	   vector <int> count1(26,0);
	   vector <int> count2(26,0);
	   for(int i=0;i<p.size();i++)
	   {
	       count1[p[i]-'a']++;
	   }
	   int l=0,r=0;
	   int cnt=0;
	   while(r<s.size())
	   {
	        count2[s[r]-'a']++;
	       if(r-l+1==p.size())
	       {
	           if(count1==count2)
	           {
	            cnt++;
	           }
	           count2[s[l]-'a']-=1;
	           l++;
	           r++;
	       }
	       else
	       {
	           r++;
	       }
	   }
	   return cnt;
	}

};
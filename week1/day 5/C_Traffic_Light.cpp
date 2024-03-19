#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        string x = s + s;
        vector<int> v; 
        int minidx = INT_MAX, maxidx; 
        for (int i = 0; i < 2 * n; i++) 
        {
            if (x[i] == c) 
            {
                if (i <= minidx) 
                {
                    minidx = i;
                }
            }
            if (x[i] == 'g') 
            {
                maxidx = i;
                v.push_back(maxidx - minidx);
                minidx = INT_MAX;
            }
        }
         
            cout << *max_element(v.begin(), v.end()) << '\n';
    }

    return 0;
}
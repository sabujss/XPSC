#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(m + 1);
    for (int i = 0;i <= m;i++) 
    {
        cin >> a[i];
    }

    vector<vector<int>> allmask;
    for (int mask = 0;mask <= m;mask++) 
    {
        vector<int> v;
        for (int k = 0;k < n;k++) 
        {
            if ((a[mask] >> k) & 1) 
            {
                v.push_back(1);
            }
            else {
                v.push_back(0);
            }
        }
        allmask.push_back(v);
    }

    int ans = 0;
    vector<int> fedormask = allmask[m];
    for (int i = 0;i < allmask.size() - 1;i++) 
    {
        vector<int> v = allmask[i];
        int count = 0;
        for (int k = 0;k < n;k++) 
        {
            if (fedormask[k] != v[k]) 
            {
                count++;
            }
        }
        if (count <= k) 
        {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}
/// Set approach does not work in this case
// Trying map now

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> count;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }
        for (auto i : count)
        {
            if (i.second % 2 != 0)
            {
                cout << i.first << endl;
            }
        }
    }

    return 0;
}
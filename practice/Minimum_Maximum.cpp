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
        int v;
        cin >> v;
        vector<int> a(v);
        for (int i = 0; i < v; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        cout << a[0] * (v - 1) << endl;
    }

    return 0;
}
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
        int n, k;
        cin >> n >> k;
        vector<int> m(n);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> m[i];

            if ((m[i] + k) % 7 == 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}


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
        while (n--)
        {
            int a;
            cin >> a;
            if (k - a >= 0)
            {
                cout << "1";
                k = k - a;
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    
    return 0;
}

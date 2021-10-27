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
        bool flag = 1;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != '?' && b[i] != '?')
            {
                if (a[i] != b[i])
                {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
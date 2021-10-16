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
        int a[4];

        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }

        bool rect = true;
        for (int i = 0; i < 4; i++)
        {
            bool test = false;
            for (int j = 0; j < 4; j++)
            {
                if (i != j && a[i] == a[j])
                {
                    test = true;
                }
            }

            rect = rect && test;
        }

        if (rect)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
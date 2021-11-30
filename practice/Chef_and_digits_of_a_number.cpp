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
        string a;
        cin >> a;
        int count = 0;
        int count_ = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '0')
            {
                count++;
            }
            else
                count_++;
        }

        if (min(count, count_) == 1 || a.length() == 1)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}

temp
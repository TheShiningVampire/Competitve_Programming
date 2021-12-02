#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        map<char, int> dict;
        for (int i = 0; i < a.length(); i++)
        {
            dict[a[i]] = dict[a[i]] + 1;
        }

        // Sort the map  on the basis of the values
        int max = 0;
        int sum = 0;
        for (auto i : dict)
        {
            if (i.second > max)
            {
                max = i.second;
            }
            sum += i.second;
        }

        if (sum == 2 * max)
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

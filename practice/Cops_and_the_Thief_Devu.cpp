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
        int M, x, y;
        cin >> M >> x >> y;
        vector<int> houses(M);
        for (int i = 0; i < M; i++)
        {
            cin >> houses[i];
        }
        sort(houses.begin(), houses.end());

        //Actually checking now
        int counthouses = 0;
        // first cop
        if (houses[0] > x * y)
        {
            counthouses = counthouses + houses[0] - x * y;
        }

        // rest of the middle houses
        for (int i = i; i < M - 1; i++)
        {
            if (houses[i] + x * y < houses[i + 1] - x * y)
            {
                counthouses += houses[i] - houses[i + 1] - 2 * x * y;
            }
        }

        // Last house
        if (houses[M - 1] + x * y < 100)
        {
            counthouses += 100 - houses[M - 1] - x * y;
        }

        cout << counthouses << endl;
    }

    return 0;
}
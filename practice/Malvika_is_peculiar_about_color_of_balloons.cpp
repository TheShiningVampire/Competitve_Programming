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
        int a1 = 0;
        int b1 = 0;
        for (int i = 0; i <a.length(); i++)
        {
            if (a[i] == 'a')
            {
                a1++;
            }
            else 
            {
                b1++;
            }
        }
        cout<<min(a1,b1)<<endl;
    }

    return 0;
}
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
        cin>>n;
        if(n== 2010 ||n== 2015 ||n== 2016 ||n== 2017 ||n== 2019 )
        {
            cout << "HOSTED"<<endl;
        }
        else
        {
            cout << "NOT HOSTED"<<endl;
        }
    }

    return 0;
}
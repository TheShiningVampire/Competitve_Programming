#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        vector<int> a(3);
        for(int i = 0; i<3 ; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<a.at(1)<<endl;
    }

    return 0;
}
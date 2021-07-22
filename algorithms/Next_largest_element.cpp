#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t , arr[t];
    cin>>t;
    for(int i = 0; i<t ; i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    stack<int> s;
    for(int i = t - 1; i>=0; i--)
    {
        if(s.size() == 0)
        {
            v.push_back(-1);
        }
    }

    return 0;
}

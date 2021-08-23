#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n , k;
    cin >> n>>k;
    vector<int> c(n+1 , 0);
    {
        while(k--)
        {
            string a;
            cin >> a;
            if (a[2] == 'I')
            {
                int v;
                cin>>v;
                c[v] = (c[v] + 1)%2;
            }
            else
            {
                fill(c.begin(), c.end() ,0);
            }

            cout<<accumulate(c.begin(), c.end() , 0)<<endl;
        }
    }
    return 0;
}
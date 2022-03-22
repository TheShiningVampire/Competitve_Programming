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
        vector<int> sides(3);
        for (int i = 0; i < 3; i++)
        {
            cin>>sides[i];
        }
        if(sides[0] + sides[1] + sides[2] == 180)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    
    return 0;
}

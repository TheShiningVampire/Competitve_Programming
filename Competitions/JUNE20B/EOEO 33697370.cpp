#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
typedef int ll;
typedef long double ld;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int ts;
        cin>>ts;
        int temp = ts , power = 0;
        while(temp %2 == 0)
        {
            temp = temp/2;
            power++;
        }

        int num = pow(2,power+1) , count = ts/num;
        cout<<count<<endl;
    }
    return 0;
}

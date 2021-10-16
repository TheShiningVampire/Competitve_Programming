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
        int k;
        cin>>k;
        int a;
        cin>>a;
        k--;
        int sum = 0;
        while(k--)
        {
            int b;
            cin>>b;
            sum += (a!=b)? abs(a-b)-1:0;
            a = b;
        }
        cout<<sum<<endl;
    }



    return 0;
}

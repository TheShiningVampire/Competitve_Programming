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
        int n , k;
        cin>>n>>k;
        int sum = 0 , ssum = 0;
        while(n--)
        {
            int p;
            cin>>p;
            sum+=p;
            ssum += (p<k)? p:k;
        }

        cout<<sum - ssum<<endl;
    }



    return 0;
}

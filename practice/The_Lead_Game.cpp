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
    tuple<int,int> max;
    get<1>(max) = 0;
    while (t--)      
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            if(a-b > get<1> (max))
            {
                get<1> (max) = a-b;
                get<0> (max) = 1;
            }
        }
        else
        {
            if(b-a > get<1> (max))
            {
                get<1> (max) = b-a;
                get<0> (max) = 2;
            }
        }
    }
    cout<<get<0>(max)<<" "<<get<1> (max)<<endl;

    return 0;
}
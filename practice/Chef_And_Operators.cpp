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
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else if(a==b)
        {
            cout<<"="<<endl;
        }
        else
        {
            cout<<"<"<<endl;
        }
    }

    return 0;
}
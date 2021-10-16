#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    float b;
    cin>>a>>b;
    if (a % 5 == 0 && a+0.5<=b)
    {
        cout<<b-a-0.5<<endl; 
    }
    else
    {
        cout<<b<<endl;
    }
    return 0;
}
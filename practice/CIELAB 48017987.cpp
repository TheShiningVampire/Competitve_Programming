#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a , b;
    cin>>a>>b;
    int n = a-b , temp = 1;
    if (n == 9)
    {
        temp = -1;
    }
    cout<<n+temp<<endl;    
    
    return 0;
}
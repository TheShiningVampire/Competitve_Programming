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
        int n;
        bool flag = 0;
        cin>>n;
        while(n--)
        {
            int temp;
            cin>>temp;
            if(temp%2 == 0)
                flag = 1;
        }
        if(flag == 1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}

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
        int a;
        int ans = 0;
        cin>>a;
        while(a>0)
        {
            if(a%10 == 4)
            ans++; 

            a = a/10;
        }

        cout<<ans<<endl;
    }
    

    return 0;
}
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
        int n,d;
        cin>>n>>d;
        vector<int> a(n);

        for(int i = 0 ; i<n ; i++)
        {
            cin>>a[i];
        }

        sort(a.begin() , a.end());

        if(a[0]+a[1]<=d || a[n-1]<=d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        



    }
    
    
    return 0;
}
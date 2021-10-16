#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n] , maxv = INT_MIN;
        for(int i = 0; i< n ; i++)
        {
            cin>>a[i];
        }

        for(int  i = 0 ; i < n ; i++)
        {
            maxv= max(maxv , i+a[i]);
        }
        cout<<maxv<<endl;
    }




    return 0;
}

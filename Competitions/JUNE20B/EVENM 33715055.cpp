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
        cin>>n;
        int num =1; 
        int a[n][n];

        for(int i=0; i<n;i++)
        {
            for(int j = i%2 ; j<n ; j+=2)
            {
                a[i][j] = num;
                num+=2;
            }
        }

        num = 2;

        for(int i=0; i<n;i++)
        {
            for(int j = (i+1)%2 ; j<n ; j+=2)
            {
                a[i][j] = num;
                num+=2;
            }
        }

        for(int i = 0; i< n ; i++)
        {
            for(int j = 0; j<n ; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }



    return 0;
}

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
        int maxi = INT_MIN;
        int n;
        cin>>n;
        while(n--)
        {
            int s , p , v;
            cin>>s>>p>>v;
            maxi = max(maxi, (p/(s+1)) * v); 
        }
        cout<<maxi<<endl;
    }



    return 0;
}

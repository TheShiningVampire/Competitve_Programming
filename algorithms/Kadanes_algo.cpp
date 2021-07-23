#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) 
    {
        cin>>a[i];
    }

    int max = a[0];
    int sum = a[0];

    for (int i=1; i<n; i++)
    {
        if(sum + a[i] <=0)
        {
            sum =0;
        }
        else if(sum + a[i] > max)
        {
            sum += a[i];
            max = sum;
        }
        else
        {
            sum += a[i];
        }
    }

    cout<<max<<endl;

    return 0;
}
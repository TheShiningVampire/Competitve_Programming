#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>a[i];
    }

    int ans = 0 ,maxa = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] == 0)
        {
            maxa = max(maxa , ans);
            ans = 0;
        }
        else
        {
            ans++;
        }
    }

    maxa = max(ans, maxa);

    cout<<maxa<<endl;


    return 0;
}

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
        int a[n], mini = INT_MAX ;
        int ans;

        for(int i=0 ; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<mini)
        {        ans = i+1;
                mini = a[i];
        }
        }

        cout<<ans<<endl;
    }




    return 0;
}

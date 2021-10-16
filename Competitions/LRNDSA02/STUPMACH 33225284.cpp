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
        ll int a[n];
        if(n==0)
        {
            cout<<"0"<<endl;
            break;
        }
        for(int i= 0 ; i< n ; i++)
        {
            cin>>a[i];
        }
        ll int mini = a[0] , ans = a[0];
        for(int i= 1 ; i< n ; i++)
        {   
            if(a[i]>mini)
            {
               ans +=mini; 
            }         
            else
            {
                mini = a[i];
                ans+=mini;
            }

        }

        cout<<ans<<endl;
    }



    return 0;
}

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
      ll  int n,k;
        cin>>n>>k;
      ll int a[n] , b[n];
        for(int i =0 ; i< n ; i++)
        {
            cin>>a[i];
        }

        for(int i =0 ; i< n ; i++)
        {
            cin>>b[i];
        }
       float maxi = INT_MIN ;
       ll int s=0 , g= 0;
        for(int i = 0; i <n;i++)
        {
            if(float(b[i])/a[i] > maxi)
            {
                s= a[i];
                g= b[i];
                maxi = float(b[i])/ a[i];
            }
        }
        cout<< (k/s)* g<<endl;
    }



    return 0;
}

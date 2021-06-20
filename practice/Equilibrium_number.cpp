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
        int n;
        cin>>n;
        int a[n] , sum = 0;
        for(int i = 0; i <n; i++)
        {
            cin>>a[i];
            sum +=a[i];
        }
        int lsum = 0 , flag = -1;

        for (int i = 0; i < n; i++)
        {
            sum = sum - a[i];
            if(lsum == sum)
            {
                flag = i;
                break;
            }
            lsum +=a[i];
        }

        if (flag != -1)
        {
            cout<<"Number is "<<a[flag]<<endl;
        }
        else
        cout<<"Not Found"<<endl;
               

    }
    
    
    
    return 0;
}
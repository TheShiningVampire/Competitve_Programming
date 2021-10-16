#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nprime(100001 , 0);
    nprime[0] = 1;
    nprime[1] = 1;

    for (int i = 0; i*i < 100001 ; i++)
    {
        if(nprime[i] ==  0)
        {
            for (int j = 2*i; j<100001 ; j+=i)
            {
                nprime[j] =1;
            }
        }

    }    

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<(nprime[n] == 1 ? "no":"yes" )<<endl;
    }

    return 0;
}
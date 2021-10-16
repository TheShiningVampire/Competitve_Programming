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
        string a;
        cin>>a;
        int ans = 2;
        for(int i = 1 ; i < a.length() ; i++ )
        {
            int temp = a[i] - a[i-1];
            if(temp<0)
            {
                temp+=26;
            }
            ans+=temp;
            ans++;
        }
        if(ans <= (11*a.length() ))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

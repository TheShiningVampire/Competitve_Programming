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
        string s;
        cin>>s;
        int count = 0;
        int i = 0;
        while(i<s.length() - 1)
        {
            if((s[i] == 'x' && s[i+1] == 'y') || (s[i] == 'y' && s[i+1] == 'x'))
            {
                count++;
                i++;
            }
            i++;
        }

        cout<<count<<endl;
    }



    return 0;
}

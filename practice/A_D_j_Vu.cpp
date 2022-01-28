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
        int flag = 0;
        string s;
        cin>>s;
        for(int i = 0; i<s.length() ; i++)
        {
            if([s.length() - i-1] != 'a')
            {
                flag = 1;
                s.insert(i , "a");
                break;
            }

        }
        if(flag == 1)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}






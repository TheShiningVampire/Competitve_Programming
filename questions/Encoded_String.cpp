#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    char alp[] = ['a', "b",'c','d','e','f','g','h','i','j','k','l','m','n','o','p']
    cin>>t;
    while (t--)
    {
        int l;
        cin>>l;
        string s;
        cin>>s;
        for(int i = 0 ; i<s.size() ; i++)
        {
            int index = int(s[i])*8 + int(s[i+1]) * 4 + int(s[i+2])*2 + int(s[i+3]);
            cout<<alp[index];
        }

    }
    
    
    return 0;
}
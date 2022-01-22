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
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<string> dict(n);
        for (int i=0;i<n;i++)
        {
            cin>>dict[i];
        }
        while (k--)
        {
            int a;
            cin>>a;
            while(a--)
            {
                string k;
                cin>>k;
                
                if (find(dict.begin(),dict.end(),k)== dict.end())
                {
                    cout<<"NO ";
                    break;
                }
            }
            cout<<"YES ";
        }
        cout<<endl;

    }


    return 0;
}
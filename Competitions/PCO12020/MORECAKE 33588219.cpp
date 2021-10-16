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
    int tots = 0, totreq = 0;
    while(t--)
    {
        int s,n,k,r;
        cin>>s>>n>>k>>r;
        int req = 0 , prev = k;
        req+= prev;
        n--;
        while(n--)
        {
            prev*=r;
            req+=prev;
        }

        if(req>s)
        {
            cout<<"IMPOSSIBLE"<<" "<<req-s<<endl;
        }
        else
        {
            cout<<"POSSIBLE"<<" "<<s-req<<endl;
        }

        tots+=s;
        totreq+=req;
        
    }

    if(totreq>tots)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        cout<<"POSSIBLE"<<endl;
    }
    


    return 0;
}

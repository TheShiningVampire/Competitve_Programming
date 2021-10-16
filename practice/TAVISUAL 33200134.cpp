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
        int n , c,k;
        cin>>n>>c>>k;
        while(k--)
        {
            int l,r;
            cin>>l>>r;
            if(l<=c && r>=c)
            {
                c = l+r - c;
            }
        } 
        cout<<c<<endl;
    }



    return 0;
}

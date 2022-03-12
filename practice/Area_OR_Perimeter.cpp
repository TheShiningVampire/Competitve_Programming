#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,b;
    cin>>l>>b;
    int area = l*b;
    int peri = 2*(l+b);
    if (area>peri) 
    {
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }
    else if (area<peri)
    {
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<peri<<endl;
    }
    return 0;
}
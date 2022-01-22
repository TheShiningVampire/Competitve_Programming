#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    if (n == 0) 
    {
        cout<<"1"<<endl;
    }
    else
    {

        int v = 0;
        while(n > 0)
        {
            n = n/10;
            v +=1;
        }
        if (v>3)
        {
            cout<<"More than 3 digits"<<endl;
        }
        else{
        cout<<v<<endl;

        }
    }    
    return 0;
}
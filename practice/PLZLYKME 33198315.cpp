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
        ll int l,d,s,c;
        cin>>l>>d>>s>>c;

        ll int sum = s;
        d--;
        while(d--)
        {
            sum = (1+c)*sum;
            if(sum>= l) break;
        }
        if(sum>=l)
            cout<<"ALIVE AND KICKING"<<endl;
        else
        {
            cout<<"DEAD AND ROTTING"<<endl;
        }
        
    }



    return 0;
}

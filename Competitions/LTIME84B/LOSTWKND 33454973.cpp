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
        int hours[5], p;
        for(int i = 0 ;i < 5 ;i++)
        {
            cin>>hours[i];
        }
        cin>>p;
        int sum = 0;
        for(int i= 0; i< 5 ;i++)
        {
            sum += (hours[i] * p);
        }

        if(sum > 120)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }


    return 0;
}

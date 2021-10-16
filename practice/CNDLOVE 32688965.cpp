#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,sum =0;
        cin>>n;
        for(int i= 0;i<n;i++)
        {
            int t;
            cin>>t;
            sum += t;
        }


        if(sum%2 ==0)
            cout<<"NO"<<endl;
        else    
            cout<<"YES"<<endl;
    }

    return 0;
}
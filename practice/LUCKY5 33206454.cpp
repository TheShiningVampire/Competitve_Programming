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
        string n;
        cin>>n;
        ll int count =0;
        for(int i =0 ; i <n.length() ; i++)
        {
            if(!((n[i] == '4') || (n[i] == '7')))
            {
                count++;
            }

        } 

        cout<<count<<endl;
    }



    return 0;
}

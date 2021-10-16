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
        string s;
        cin>>s;
        int sum = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(int(s[i])<=57)
            {
                sum += int(s[i]) -int('0');
            }
        }
        cout<<sum<<endl;
    }



    return 0;
}

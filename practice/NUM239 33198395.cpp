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
        int l,r;
        cin>>l>>r;
        int count =0;
        for(int i = l ; i<= r;i++ )
        {
            if(i == 2 || i == 3 || i == 9)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }



    return 0;
}

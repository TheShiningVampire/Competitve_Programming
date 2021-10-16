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
        int maxc = 0  , i=0 , ans =0;
        while(i<s.length())
        {
            if(s[i] == '.')
            {
                int count = 1;
                while(s[i] !='#')
                {
                    count++;
                    i++;
                }

                if(count>maxc)
                {
                    maxc = count;
                    ans++;
                }
            }

            

            i++;
        }

        cout<<ans<<endl;

    }





    return 0;
}

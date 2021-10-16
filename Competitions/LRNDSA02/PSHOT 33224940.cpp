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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a = 0 , b = 0 , i = 0 , ans = 0 , ma =n , mb =n;
        while(i<2*n)
        {
            if(i%2 == 0)
            {   ma--;
                if(s[i] =='1')
                    a++;
            }
             if(i%2 == 1)
            {   mb--;
                if(s[i] =='1')
                    b++;
            }
            ans++;
            if(a>b)
            {
                if(a-b > mb)
                break;
            }

            if(b>a)
            {
                if(b-a > ma)
                break;
            }
            i++;
            
        }

        cout<<ans<<endl;

    }



    return 0;
}

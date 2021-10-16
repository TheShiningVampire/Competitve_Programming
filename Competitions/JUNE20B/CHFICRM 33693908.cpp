#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
typedef int ll;
typedef long double ld;

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c5 = 0, c10 = 0;
        int flag = 0;
        while(n--)
        {
            int t;
            cin>>t;
            if(t == 5)
                c5++;
            else if(t == 10)
            {
                c10++;
                c5--;
            }
            else if(t == 15)
            {
                if(c10 != 0) 
                    c10--;
                else
                {
                    c5 = c5 -2;   
                }
                
            }

            if(c5< 0 || c10 <0)
            {
                flag = 1;
            }           
        } 
        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }



    return 0;
}

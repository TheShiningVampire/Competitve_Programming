#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while (t--)
    {
        int a, count = 0;
        cin>>a;
        for (int i = 0; i <= a; i++)
        {  
            int j = i;         
            while(j%5 == 0)
            {
                count += 1;
                j = j/5;
            }
        }

        cout<<count<<endl;
               
    }
    
    
    
    return 0;
}
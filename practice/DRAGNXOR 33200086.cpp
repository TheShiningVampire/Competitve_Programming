#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t ;
    cin>>t;
    while(t--)
    {
        int n , a ,b ;
        cin>>n>>a>>b;
        int counta = 0, countb = 0;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if((a & (1<<i)) != 0)
                counta++;
            if((b & (1<<i)) != 0)
                countb++;
        } 
            for(int i = n-1 ; i>=abs(-n+counta + countb);i-- )
            {
                ans += pow(2,i);
            } 
        
        cout<<ans<<endl;
    }



    return 0;
}

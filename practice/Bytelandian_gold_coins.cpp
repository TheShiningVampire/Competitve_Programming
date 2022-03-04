#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"


map<int, int> profit;

int getprofit(int n) 
{
    if (profit.find(n) != profit.end())
    {
        return profit[n];
    }
    else
    {
        if (n<12)
        {
            return n;
        }
        profit[n] = max(n , getprofit(n/2) + getprofit(n/3) + getprofit(n/4));
        return profit[n];
    }
    
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    while(scanf("%lld",&n) != EOF)
    {
        printf("%lld \n" , getprofit(n));
    }

    return 0;
}
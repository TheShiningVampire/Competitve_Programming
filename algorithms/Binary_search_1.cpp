#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        int n , q;
        vector<int> a(n , 0);
        for (int i=0 ; i< n ; i++)
        {
            cin>>a[i];
        }
        int start = 0, end = n-1;

        while (start <= end)
        {
            int mid = (start+end)/2;

            if (a[mid] == q)
            {
                cout<<mid+1<<endl;
                break;
            }
            else if (q>a[mid])
            {
                start = mid+1;
            }
            else
            {
                end = mid -1;
            }
            
        }
        


    }
    
    
    return 0;
}

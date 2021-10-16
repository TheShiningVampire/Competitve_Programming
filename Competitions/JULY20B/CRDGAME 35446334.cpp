#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
typedef int ll;
typedef long double ld;

int sumi(int num)
{
    int s = 0;
    while(num>0)
    {
        s+=num;
        num = num/10;
    }
    return s;
}


int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        int a = 0 , b = 0;
        while(k--)
        {
            int c , m;
            cin>>c>>m;
            c = sumi(c);
            m = sumi(m);
            if(c>m)
            {
                a++;
            }
            else if(c<m)
            {
                b++;
            }
            else
            {
                a++;
                b++;
            }
        }
        if(a>b)
        {
            cout<<"0 "<<a<<endl;
        }
        else if(a<b)
        {
            cout<<"1 "<<b<<endl;   
        }
        else
        {
            cout<<"2 "<<a<<endl;
        }
        
    }




    return 0;
}

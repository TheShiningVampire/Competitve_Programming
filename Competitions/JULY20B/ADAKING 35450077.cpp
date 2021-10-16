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
        int n , count = 0;
        cin>>n;
        cout<<"O";
        if(n<=8)
        {
            for(int i = 1;i<n;i++)
            {
                cout<<".";
            }
            for(int i= n;i<8;i++)
            {
                cout<<"X";
            }
            cout<<endl;
            count++;
            n = n- 8;
        }
        else
        {
            cout<<"......."<<endl;
            n = n-8;
            count++;
        }
        
        while(n>0)
        {   
            if(n<=8)
            {
                for(int i = 0;i<n;i++)
                {
                    cout<<".";
                }
                for(int i= n;i<8;i++)
                {
                    cout<<"X";
                }
                cout<<endl;
                count++;
                n = n- 8;
            }
            else
            {
                cout<<"........"<<endl;
                count++;
                n = n-8;
            }
        }
        for(int i = count ; i<8 ; i++)
        {
            cout<<"XXXXXXXX"<<endl;
        }
    }



    return 0;
}

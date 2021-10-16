#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a.length() >b.length() )
        {
            string temp = a;
            a = b;
            b = temp;
        }

        int i= 0, j = 0 , flag = 0;
        while(i<a.length())
        {
            while(j<b.length())
            {
                if(a[i] == b[j])
                {
                    i++;
                }
                
                j++;
            }

            if(j == b.length() && i!= a.length())
            {
                cout<<"NO"<<endl;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout<<"YES"<<endl;



    }
}

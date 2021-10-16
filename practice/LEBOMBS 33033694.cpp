#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        string s ;
        cin>>s;
        int count= 0 ;

        if(s[0] == '1')
            count++;
        for(int i = 1;i<n;i++)
        {
            if(s[i-1] != '1')
            {
               if(s[i] == '1')
               {
                if(i>=2 && s[i-2] == '1')
                {
                    count++;
                }
                else               
                count = count+2;
               }
            }
            else
            {
                count++;
            }
            
        }
        cout<<n- count<<endl;

    }
    return 0;
}
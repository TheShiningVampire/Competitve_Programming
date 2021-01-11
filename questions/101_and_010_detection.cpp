#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int flag=0,found=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i] == '1')
            {
                if(flag==2)
                {
                    flag = 0;
                    found = 1;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
            if(a[i]=='0')
            {
                if(flag==1)
                 flag=2;
                else if(flag==2)
                {
                    flag = 0;
                }
                 
            }
        }
        
        
        for(int i=0;i<a.length();i++)
        {
            if(a[i] == '0')
            {
                if(flag==2)
                {
                    flag = 0;
                    found = 1;
                    break;
                }
                else
                {
                    flag = 1;
                }
            }
            if(a[i]=='1')
            {
                if(flag==1)
                 flag=2;
                else if(flag==2)
                {
                    flag = 0;
                }
                 
            }
        }
        
        if(found == 1)
            cout<<"Good"<<endl;
        else
            cout<<"Bad"<<endl;
        
    }

	return 0;
}


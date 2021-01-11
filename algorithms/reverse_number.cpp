#include <iostream>
using namespace std;

int rev(int a)
{
    int ans=0,flag=0;
    while(a>0)
    {
        if(a%10 != 0 || flag==1)
        {
            ans =ans*10 +(a%10);
            flag= 1;
        }
        
        a=a/10;
    }
    
    return ans;
}


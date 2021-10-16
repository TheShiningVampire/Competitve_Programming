#include <iostream>
using namespace std;

int rev(int a)
{
    int ans=0,flag=0;
    while(a>0)
    {
        if(a != 0 || flag==1)
        {
            ans =ans*10 +(a);
            flag= 1;
        }
        
        a=a/10;
    }
    
    return ans;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum = rev(a)+rev(b);
	    cout<<rev(sum)<<endl;
	}
	return 0;
}

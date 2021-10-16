#include <iostream>
using namespace std;

int main() {
	int t,a,b,sum=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{   
	    sum=0;
	    cin>>a;
	    sum = sum + (a);
	    while(a!=0)
	    {
	        b=a;
	        a=a/10;
	    }
	    sum = sum + b;
	    cout<<sum<<endl;
	    
	}
	
	
	
	return 0;
}

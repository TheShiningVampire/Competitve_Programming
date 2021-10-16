#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    long long int prd = a*b;
	    while(a!=b)
	    {
	        if(a>b)
	            a=a-b;
	        else
	            b=b-a;
	        
	    }
	    
	    cout<<a<<" "<<prd/a<<endl;
	    
	}
	return 0;
}

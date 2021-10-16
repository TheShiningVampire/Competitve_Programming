#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int count=0;
	    while(a!=b)
	    {
	        if(b%a == 0)
	        {
	            while(a!=b)
	            {
	                a = a*2;
	                count++;
	            }
	        }
	        else
	        {
	            a = a/2 ;
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t,a=0,b=0;
	cin>>t;
	int p,m=0;
	for( int i=0; i<t;i++)
	{
        int pa,pb;
	    cin>>pa>>pb;
	    a = a+pa;
	    b = b+pb;
	    
	    
	    if(a>b)
	    {
	        if(a-b>m )
	        {
	            m = a-b;
	            p=1;
	        }
	    }
	    else
	    {
	        if(b-a>m)
	        {
	            m=b-a;
	            p=2;
	        }
	    }
	}
	
	cout<<p<<" "<<m;
	
	return 0;
}

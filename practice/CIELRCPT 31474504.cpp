#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    
	    int i=2048,menus = 0;
	    
	    while(i>0)
	    {
	        if(a>=i)
	        {
	            menus++;
	            a = a - i;
	        }
			else	        
	        i = i/2; 
	    }
	    
	    cout<<menus<<endl;
	}
	
	
	return 0;
}

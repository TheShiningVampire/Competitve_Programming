#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool found=0;
	int m=n;
	while(!found)
	{
	    int l=m,k=0;
	    while(l>0)
	    {
	        k = k*10 + (l);
	        l=l/10;
	    }
	    
	    if(k==m)
	    {   
	        int prime =1;
	        for(int i=2;i<=n/2;i++)
	            {
	                if(m%i== 0)
	                 prime=0;
		        }
	        if(prime==1){
	            found = 1;
	         cout<<m<<endl;
	         break;
	        }
	    }
	    m++;
	}
	
	
	return 0;
}

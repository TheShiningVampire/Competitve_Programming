#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[10];
	    cin>>a[0];
	    int min= a[0],imin=0;
	    
	    for(int i=1;i<10;i++)
	    {
	        cin>>a[i];
	        if(a[i]<min)
	       {
	            min =a[i];
	            imin = i;
	       }
	    }
	    int final;
	    if(min == 0)
	    {
	        if(imin != 0)
	        {
	            final = imin;
	        }
	        else
	        {   
	            int flag = 0;
	            for(int i=1;i<10;i++)
	            {
	                if(a[i] == 0)
	                {
	                    final = i;
	                    flag = 1;
	                    break;
	                }
	                
	            }
	            if(flag == 0)
	            final = 10;
	            
	       }
	    }
	    else
	    {
	        while(min!=0)
	        {
	            final = 10*final + imin;
	        }
	    }
	    
	    cout<<final<<endl;
	}
	return 0;
}


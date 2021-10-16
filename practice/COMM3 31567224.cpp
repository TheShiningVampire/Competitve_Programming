#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int r;
	    cin>>r;
	    int a[3][2];
	        for(int i=0;i<3;i++)
	        {
	            for(int j=0;j<2;j++)
	            {
	                cin>>a[i][j];
	            }
	        }
	    
	    
	    float dis[3];
	    
	    for(int i=1;i<3;i++)
	    {	
	    	float g= a[i][0]-a[i-1][0], k=a[i][1]-a[i-1][1];
	    	float v=pow(g,2) , w=pow(k,2);
	        dis[i] = sqrt(v+w);
	        
	    }
	    
	        dis[0] = sqrt(pow(a[0][0]-a[2][0],2)+pow(a[0][1]-a[2][1],2));
	        
	   int count = 0;     
	   for(int i=0;i<3;i++)
	   {
	       if(dis[i]<=r)
	       {
	           count++;
	       }
	       
	   }
	    
	    if(count>=2)
	        cout<<"yes"<<endl;
	    else 
	        cout<<"no"<<endl;
	        
	}
	return 0;
}

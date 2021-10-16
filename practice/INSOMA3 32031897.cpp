#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	int sum = 0,max = a[0];
	for(int i= 1;i<n;i++ )
	{   
	   if(a[i]<max){ 
	    
	    for(int j=0;j<i;j++)
	    {
	        if(a[i] < a[j])
	        {
	            sum++;
	        }
	    }
	   }
	   else 
	    max = a[i];
	    
	    
	}
	cout<<sum<<endl;
	
	return 0;
}

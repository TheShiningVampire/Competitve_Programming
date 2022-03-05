#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	unsigned long int a[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
		}
		int count= 1;
		int maxspd=a[0];
		
		for(int i=1;i<n;i++)
		{
			if(a[i]<maxspd)
			{
				maxspd = a[i] ; 
				count++;
			}
		}
		cout<<count<<endl;	
	}
	return 0;
}
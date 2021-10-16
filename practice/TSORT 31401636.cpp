#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[1000005], c[1000005];
	for(int i = 0; i<t; i++)
	{
	    cin>>a[i];
	}	

	for(int i=0 ; i<1000005;i++)
	{
		c[i]= 0;
	}
	for(int i = 0; i< t; i++)
	{
	    int x=a[i];
	    c[x]++;
	}
	int k=0;
	for(int i= 0; i<1000005; i++)
	{
		for(int j=0;j<c[i];j++)
		{
	    a[k] = i;
	    k++;
		}	
	}
	    
	for(int i =0; i<t; i++)
	{
	    cout<<a[i]<<endl;
	}
	return 0;
}

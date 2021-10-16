#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n],temp;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i] = a[i];
		}
		
		temp=a[0];
		for(int i=0;i<n;i++)
		{
			if(temp != a[i])
			{
				while(temp != a[i])
				{
					if(temp>a[i])
					temp = temp-a[i];
					
					else
					a[i] = a[i] -temp; 
				}
				
			}
			
		}
		for(int i=0;i<n;i++)
		{
			cout<<b[i]/temp<<" ";
		}
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i]>>b[i];
		}
		
		int flag =0 ;
		for(int i=0;i<n;i++)
		{
				if(a[i]>=(x-y) && b[i]<=k )
				{
					flag = 1;
					break;
					
				}

		}
		
		if(flag ==1 )
			cout<<"LuckyChef"<<endl;
		else 
			cout<<"UnluckyChef"<<endl;
	}
	
	
	return 0;
}

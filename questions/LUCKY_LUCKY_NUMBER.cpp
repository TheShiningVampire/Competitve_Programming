#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int seven= 0,four =0,flag = 0;
	
			if(n%4 == 0 && n%7 ==0)
			{
				four = n;
			}
			
			else if(n%4 == 0 && n%7 != 0)
			{
				seven = n; 
				flag = 1;
			}
			
			else if(n%4 != 0 && n%7 == 0)
			{
				four = n; 
			}
			
			else
			{
				while(n>7)
				{
					n-=4;
					if(n%7 == 0)
					{
						
						four+=n;
						n= 0;
					}
				}
				
			}
			
			if(four == 0 && flag == 0)
			cout<<"-1"<<endl;
			else 
			cout<<four<<endl;
			
			
			
	}
	return 0;
}

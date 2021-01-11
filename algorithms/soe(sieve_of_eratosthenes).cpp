#include <bits/stdc++.h>
using namespace std;

void soe(int n)
{
	int a[n]={0};
	a[0] =1;
	a[1] =1;
	for(int i=2;i<n+1;i++)
	{
		if(a[i] == 0)
		{
			for(int j=2*i;j<=n;j+=i)
			{
				a[j] =1;
			}
		}
	}
	
	for(int i=0;i<=n;i++)
	{
		if(a[i] == 0)
		{
			cout<<i<<endl;
		}
	}
	
}

int main() {
	int n;
	cin>>n;
	soe(n);
	return 0;
}


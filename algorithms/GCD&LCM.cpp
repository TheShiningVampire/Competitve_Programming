#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b>a)
	{
		int temp;
		temp = a;
		a = b;
		b = temp; 
	}
	
	if(a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}

int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}

int main()
{
	cout<<gcd(74,37)<<" "<<lcm(74,37);
	return 0;
}

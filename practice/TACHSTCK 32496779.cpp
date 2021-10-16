#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,d;
	cin>>n>>d;
	
	int a[n];
	for(int i= 0;i<n;i++)
	{
	    cin>>a[i];
	}
	
	sort(a,a+n);
	int i = 1, count =0;
	while(i<n)
	{
	    if(a[i] - a[i-1]<=d)
	    {
	        count++;
	        i = i+2;
	    }
	    else
	        i++;
	}
	
	cout<<count;
	
	
	return 0;
}

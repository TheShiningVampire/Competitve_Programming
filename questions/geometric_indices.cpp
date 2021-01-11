#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int j=1;
	    
	    while(j*2<=n)
	    {
	    	j*=2;
		}
	    
	 cout<<j<<endl;   
	}
	return 0;
}


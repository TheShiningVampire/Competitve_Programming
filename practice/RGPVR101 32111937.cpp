#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a;
	    
	    for(int i = (a.length()/2) -1 ; i>=0; i--)
	    {
	        b.push_back(a[i]);
	    }
	    
	    for(int i=a.length() - 1; i >= (a.length()/2) ;  i--)
	    {
	        b.push_back(a[i]);
	    }
	    
	    cout<<b<<endl;
	    
	}
	
	return 0;
}

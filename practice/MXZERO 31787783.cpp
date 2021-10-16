#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int one=0,zero=0;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i] == 1)
	            one++;
	       else
	            zero++;
	    }
	    if(one%2 == 0)
	    {
	        cout<<zero<<endl;
	    }
	    else 
	        cout<<one<<endl;
	    
	}
	return 0;
}

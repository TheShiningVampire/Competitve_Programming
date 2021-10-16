#include <iostream>
using namespace std;

int sum(int n)
{
    return n*(n+1)/2 ;
}





int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int d,n;
	    cin>>d>>n;
	    int res = n;
	    while(d--)
	    {
	        res = sum(res);
	    }
	    
	    cout<<res<<endl;
	    
	}
	

	return 0;
}


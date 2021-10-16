#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[2*m];
	    for(int i=0;i<2*m;i++)
	    {
	        cin>>a[i];
	    }
	    
	    if(n%2 == 0)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[5000] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }    
	    int min = abs(a[0]-a[1]);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            if(abs(a[i] - a[j]) <min)
	                min = abs(a[i] - a[j]);
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;
}

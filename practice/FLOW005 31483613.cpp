#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[] = {1,2,5,10,50,100};
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i=5,count=0;
	    while(i>=0)
	    {
	        if(a[i]<=n)
	        {
	            n = n- a[i];
	            count++;
	        }
	        else
	        i--;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

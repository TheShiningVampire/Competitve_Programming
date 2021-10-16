#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n],c[n] ={0},count =0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        c[a[i]-1]++;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(c[i]>=k && a[i]!=i+1)
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	long long int n,q;
	cin>>n>>q;
	long long int a[n],b[n];
	for(long long int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(long long int i=0;i<n;i++)
	{
	    cin>>b[i];
	}
	
	while(q--)
	{
	    long long int l,r;
	    cin>>l>>r;
	    long long int power = 0;
	    while(l<=r)
	    {
	        if(l!=r){
	        power += a[l-1]*b[l-1] + a[r-1]*b[r-1];
	        l++;
	        r--;
	        }
	        else
	        {
	            power+= a[l-1]*b[l-1];
	            break;
	        }
	    }
	    cout<<power<<endl;
	}
	return 0;
}

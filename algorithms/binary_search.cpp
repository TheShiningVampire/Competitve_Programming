#include <iostream>
using namespace std;


int binary_search(int a[],int n,int p )
{
    int start=0,end = n-1,ans;
    while(start<=end)
    {
        int mid = (start+end)/2 ; 
        if(p == a[mid])
        {
            return mid;
        }
        else if(p>a[mid])
        {
            start = mid+1;
            ans = end;
        }
        else
            end = mid-1;
    }
    
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    int a[n];
	    for(int i=n-1;i>=0;i--)
	    {
	        cin>>a[i];
	    }
	    
	    int i = binary_search(a,n,p);
	    
	    if(i == n-1)
	    {
	        if(a[i]>=p)
	        cout<<"1"<<endl;
	        else
	        cout<<"0"<<endl;
	    }
	    else
	    cout<<n-i<<endl;
	    
	    
	}
	return 0;
}  


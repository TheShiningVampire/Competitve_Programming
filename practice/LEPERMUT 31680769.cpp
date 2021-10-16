#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int local=0,global=0,found =1;
	    
	    for(int i=1;i<n;i++)
	    {
	        if(a[i-1]>a[i])
	        local++;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            if(a[i]>a[j])
	            global++;
	        }
	    }
	    
	    
	    if(local!=global)
	    found = 0;
	    
	    if(found ==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

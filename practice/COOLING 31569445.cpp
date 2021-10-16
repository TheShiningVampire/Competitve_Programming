#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> a(n),b(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    
	    
	    int index = 0,count=0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=index;j<n;j++)
	        {
	            if(a[i]<=b[j])
	            {
	                count++;
	                index = j+1;
	                break;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	}
	
	
	return 0;
}

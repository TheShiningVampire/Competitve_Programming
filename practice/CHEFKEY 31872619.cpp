#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,c;
	    cin>>n>>m>>c;
	    if(m<n)
	    {
	        int temp = m;
	        m=n;
	        n=temp;
	    }
	    
	    int count = 0;
	    for(int i=1;i<=n;i++)
	    {
	        if(c%i ==0)
	        {
	            if(c/i <= m)
	            {
	                count++;
	            }
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

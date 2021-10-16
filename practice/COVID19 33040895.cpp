#include <bits/stdc++.h>
using namespace std;

bool check(int b[] ,int n)
{
    for(int i= 0;i<n;i++)
    {
        if(b[i] == 0)
            return false;
            
    }
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n ;
	    cin>>n;
	    int a[n];
	    for(int i = 0; i< n; i++ )
	    {
	        cin>>a[i];
	    }
	    
	    int b[n] = {0};
	    int maxi = INT_MIN;
	    int mini = INT_MAX;
	    while(!check(b, n))
	    {
	        int k = 0;
	        while(b[k]!=0)
	        {
	            k++;
	        }
	        
	        int count =0;
	        b[k]=1;
	        count++;
			int mx = a[k], mn=a[k];
	        for(int i=k+1; i<n;i++)
	        {
				
	            if(abs(mx - a[i])<=2 || abs(mn - a[i])<=2)
	            {
	                b[i] = 1;
					if(a[i] > mx)
						mx = a[i];
					if(a[i]<mn)
						mn = a[i];	
	                count++;
	            }
	        }
	        
	        maxi = max(maxi , count);
	        mini = min(mini, count);
	        
	    }
	    
	    cout<<mini<<" "<<maxi<<endl;
	    
	    
	    
	}
	return 0;
}

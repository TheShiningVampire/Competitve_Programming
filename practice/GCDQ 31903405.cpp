#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if(b>a)
	{
		int temp;
		temp = a;
		a = b;
		b = temp; 
	}
	
	if(a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    while(q--)
	    {
	        int l,r;
	        cin>>l>>r;
	        vector<int> v;
	        for(int i=0;i<l-1;i++)
	        {
	            v.push_back(a[i]);
	        }
	        
	        for(int i=r;i<n;i++)
	        {
	            v.push_back(a[i]);
	        }
	        
	        int ans=v[0];
	        for(int i=1;i<v.size();i++)
	        {
	            ans = gcd(ans,v[i]);
	        }
	        
	        cout<<ans<<endl;	        
	    }
	    
	    
	}
	return 0;
}

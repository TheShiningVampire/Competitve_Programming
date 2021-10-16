#include <bits/stdc++.h>
using namespace std;

int nCr(int n,int r)
{
    int ans=1;
    for(int i=1;i<r+1;i++)
    {
        ans =ans* (n-i+1)/i;
    }
    
    return ans;
    
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> a(11);
	    for(int i=0;i<11;i++)
	    {
	        cin>>a[i];
	    }
	    
	    sort(a.begin(),a.end(),greater<int>());
	    
	    int k;
	    cin>>k;
	    bool found =0;
	    int low=k-1,high=10,index=0;
	    
	    while(!found)
	    {
	        if(a[index] ==a[k-1])
	        {
	            low = index;
	            found = 1;
	        }
	        
	        index++;
	    }
	    
	    for(int i=k-1;i<11;i++)
	    {
	        if(a[i] == a[k-1])
	        {
	            high = i;
	        }
	    }
	    cout<<nCr(high - low+1,k-low)<<endl;
	   
	}
	return 0;
}

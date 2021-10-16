#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	    vector<int> a(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int suma=0,sumb=0;
	    sort(a.begin(),a.end());
	    for(int i=0;i<min(k,n-k);i++)
	    {
	        suma+=a[i];
	    }
	    
	    for(int i=min(k,n-k);i<n;i++)
	    {
	        sumb+=a[i];
	    }
	    cout<<sumb-suma<<endl;
	    
	}
	return 0;
}

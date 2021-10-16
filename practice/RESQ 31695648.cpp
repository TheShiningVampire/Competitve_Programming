#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a,b;
	    for(int i=sqrt(n);i>0;i--)
	    {
	        if(n%i==0)
	        {
	            a = i;
	            break;
	        }
	    }
	    
	    b=n/a;
	    
	    cout<<(b-a)<<endl;
	    
	}
	return 0;
}

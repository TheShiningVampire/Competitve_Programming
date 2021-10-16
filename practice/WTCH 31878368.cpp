#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string a;
	    cin>>n;
	    cin>>a;
	    int count=0;
	    if(a[0] == '0' && a[1] == '0')
	    {
	        count++;
	        a[0] = '1';
	    }
	    for(int i=2;i<a.length()-1;i++)
	    {
	        if(a[i]=='0')
	        {
	            if(a[i-1]== '0'  && a[i+1] =='0' )
	            {
	                count++;
	                a[i] = '1';
	            }
	        }
	    }
	    if(a[n-1] == '0' && a[n-2] == '0')
	    {
	        count++;
	        a[n-1] = '1';
	    }
	    cout<<count<<endl;
	}
	
	
	return 0;
}

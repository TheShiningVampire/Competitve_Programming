#include <bits/stdc++.h>
using namespace std;

int main() {
	int t=10;
	vector<int> a;
	while(t--)
	{
	  int v=10;
	  a.clear();
	  while(v--)
	  {
	    int n;
	    cin>>n;
	    int b=nB;
	    if(a.size()!=0)
	    {
	    	int flag= 0;
	        for(int i=0;i<a.size();i++)
	        {
	        	
	            if(b==a[i])
	            {
	                flag=1;
	            }
	            
	        }
	        if(flag==0)
	            	a.push_back(b);
	    }
	    else
	        a.push_back(b);
}
    cout<<a.size()<<endl;
	  
	}
	return 0;
}

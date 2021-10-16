#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    vector<int> b(0);
	    int c[201]={0};
	    cin>>a;
	    
	    for(int i=0;i<a.length();i++)
	    {   
	        int count =0,index ; 
	        for(int j=0;j<b.size();j++)
	        {
	            if(a[i] == b[j])
	            {
	                count = 1;
	                index = j;
	            } 
	        }
	        
	        if(count == 0)
	        {
	            b.push_back(a[i]);
	            index = b.size()-1;
	        }     
	        c[index]++;
	    }
	    int sum = 0;
	    for(int i=0;i<b.size();i++)
	    {
	        sum += (c[i]/2) + (c[i]%2);
	    }
	    cout<<sum<<endl;
	}
	return 0;
}


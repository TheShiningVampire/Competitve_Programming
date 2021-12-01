#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1],b[n2],c[n3];
	for(int i=0;i<n1;i++)
	    cin>>a[i];
	for(int i=0;i<n2;i++)
	    cin>>b[i];
	for(int i=0;i<n3;i++)
	    cin>>c[i];
	    
	vector<int> final(0);
	
	
	for(int i=0;i<n1;i++)
	{
	    for(int j=0;j<n2;j++)
	    {
	        if(a[i] == b[j])
	            final.push_back(a[i]);
	    }
	    
	    for(int k=0;k<n3;k++)
	    {
	        if(a[i] == c[k])
	        {
                for(int v=0;v<final.size();v++)
                {   
                    int found = 1;
                    if(a[i] == final[v])
                    {
                        found = 0;
                    }
                    
                    if(found == 1)
	                    final.push_back(a[i]);
                }
	        }
	    }
	    
	}
	    
	for(int j=0;j<n2;j++)
	{
	    for(int k=0;k<n3;k++)
	    {
	        if(b[j] == c[k])
	        {
	            for(int v=0;v<final.size();v++)
                {   
                    int found = 1;
                    if(b[j] == final[v])
                    {
                        found = 0;
                    }
                    
                    if(found == 1)
	                    final.push_back(b[j]);
                }
	        }    
	    }
	}
	    
	sort(final.begin(),final.end());
	
	cout<<final.size()<<endl;
	for(int i=0;i<final.size();i++)
	{
	    cout<<final[i]<<endl;
	}
	    
	    
	    
	return 0;
}



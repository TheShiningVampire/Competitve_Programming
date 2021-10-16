#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[1000];
	    for(int i=0;i<1000;i++)
	    {
	        a[i] = 0;
	    }
	    for(int i=0;i<m;i++)
	    {
	        int temp;
	        cin>>temp;
	        a[temp-1]++;
	    }
	    int ind=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i] == 0 && ind == 0)
	        {
	            cout<<i+1<<" ";
	            ind = 1;
	            a[i]++;
	        }
	        else if(a[i]==0 && ind== 1)
	        {
	            ind = 0;
	        }
	    }
	    
	    cout<<endl;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i] == 0)
	        cout<<i+1<<" ";
	    }
	    
	}
	
	return 0;
}

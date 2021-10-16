#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int sum=0;
	    for(int i=a;i<=b;i++)
	    {   
	        int temp=0,k=i;
	        while(k>0)
	        {
	            temp = temp*10 + (k%10);
	            k = k/10;
	        }
	        if(temp == i)
	            sum+=i;
	        
	    }
	    cout<<sum<<endl;
	}
	return 0;
}


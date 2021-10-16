#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int b=a;
	    int temp=0;
	    while(a>0)
	    {
	        temp = (temp*10)+(a);
	        a=a/10;
	        
	    }
	    
	    if(b==temp)
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	        cout<<"losses"<<endl;
	}
	return 0;
}

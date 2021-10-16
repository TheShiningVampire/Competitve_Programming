#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c;
	    cin>>n>>c;
	    int sum =0,a;
	    while(n--)
	    {   
	        cin>>a;
	        sum+=a;
	    }
	    if(sum<=c)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}

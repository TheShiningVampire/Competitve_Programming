#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    double a,b;
	    cin>>a>>b;
	    if(a>1000)
	    {
	        double c = a*b*0.9;
	        cout<<fixed<<setprecision(6)<<c<<endl;
	    }
	    else 
	    {
	        double c = a*b;
	        cout<<fixed<<setprecision(6)<<c<<endl;
	    }
	}
	return 0;
}

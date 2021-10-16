#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a;
	    cin>>a;
	    if(a>=1500)
	    {
	        cout<<fixed<<setprecision(2)<<1.98*a + 500<<endl;
	    }
	    else 
	        cout<<2*a<<endl;
	}
	return 0;
}

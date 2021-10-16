#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    	int a,b;
    	cin>>a>>b;
    	if(a>b)
    	cout<<sqrt((a*a)-(b*b))<<" "<<sqrt((a*a)+(b*b))<<endl;
    	else
    	cout<<sqrt((b*b)-(a*a))<<" "<<sqrt((a*a)+(b*b))<<endl;
	}
	return 0;
}

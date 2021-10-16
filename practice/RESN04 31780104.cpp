#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        count = count+(a[i]/(i+1));
	    }
	    if(count%2 == 0)
	    {
	        cout<<"BOB"<<endl;
	    }
	    else
	        cout<<"ALICE"<<endl;
	}
	return 0;
}

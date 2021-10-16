#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    map<string,int> a;
	    
	    for(int i=0;i<4;i++)
	    {
	        string b;
	        cin>>b;
	        cin>>a[b];
	       
	    }
	    
	   if(a["RealMadrid"]<a["Malaga"] && a["Barcelona"]>a["Eibar"])
	    cout<<"Barcelona"<<endl;
	   else
	    cout<<"RealMadrid"<<endl;
	    
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,p;
	    cin>>n>>p;
	    int count =0;
	    int ar[n];
	    for(int i=0; i<n ; i++){
	        cin>>ar[i];
	    }
	    for(int i=0; i<n; i++){
	        
	        if(ar[i]>=p){
	            count ++;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}

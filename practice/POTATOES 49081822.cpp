#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
  
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int x=a+b;
	    int ans=x;
	    while(true){
	        x=x+1;
	        if(isPrime(x)){
	            cout<<(x-ans)<<endl;
	            break;
	        }
	    }
	}
	return 0;
}

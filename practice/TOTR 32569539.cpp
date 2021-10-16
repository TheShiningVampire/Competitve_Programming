#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;
#define PB(x) push_back(x);


int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    while(n--)
    {
        string a , b;
        cin>>a;
        for( ll i = 0; i<a.length() ;i++)
        {
            if(a[i] == '_')
                b+=' ';
            else if(65<=int(a[i]) && int(a[i])<=90)
                b+= toupper(s[int(a[i]) - int('A')]);
            else if(97<=int(a[i]) && int(a[i])<=122)
                b+=s[int(a[i]) - int('a')];
            else
                b+=a[i];
                
        }
        
        cout<<b<<endl;
        
    }
    
	
	return 0;
}

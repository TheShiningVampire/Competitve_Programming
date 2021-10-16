#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string b;
        cin>>b;
        char a[n];
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            a[i] = b[i];
            if(a[i] == 'Y')
                flag=1;
            else if(a[i] == 'I')
                flag =2;
        }
        
        
        if(flag == 1)
        cout<<"NOT INDIAN"<<endl;
        else if(flag == 2)
        cout<<"INDIAN"<<endl;
        else cout<<"NOT SURE"<<endl;
        
        
    }
    
	return 0;
}

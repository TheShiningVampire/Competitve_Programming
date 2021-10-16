#include <bits/stdc++.h>
using namespace std;


bool substring_checker(string a,string b)
{   
    int flag = 0;
    for(int i=0;i<a.length();i++)
        {   
           flag = 0;
            if(a[i] ==b[0])
            {  
                flag = 1;
                for(int j=0;j<b.size();j++ )
                {
                    if(a[i+j] != b[j]){
                        flag = 0;
                        break;
                        
                    }  
                }
            }
            if(flag ==1) break;
            
        }
        if(flag ==1) return 1;
        else return 0;
    
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        cout<<substring_checker(a,b)<<endl;
        
    }
	return 0;
}

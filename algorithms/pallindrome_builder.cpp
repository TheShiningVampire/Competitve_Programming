#include <iostream>
using namespace std;

bool palcheck(int n)
{
    int a=n ,temp = 0;
    while(a>0)
    {
        temp = temp*10 + (a%10);
        a=a/10;
    }
    
    return (n==temp);
}

int rev(long long int a)
{
    int ans=0,flag=0;
    while(a>0)
    {
        if(a%10 != 0 || flag==1)
        {
            ans =ans*10 +(a%10);
            flag= 1;
        }
        
        a=a/10;
    }
    
    return ans;
}



int main() 
{
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        int count=0;
        while(!palcheck(n))
        {
            n = n +rev(n);
            count++;
        }
        cout<<count<<" "<<n<<endl;
    }
	
	return 0;
}


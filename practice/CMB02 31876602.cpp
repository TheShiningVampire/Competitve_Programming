#include <iostream>
using namespace std;

bool palcheck(int n)
{
    int a=n ,temp = 0;
    while(a>0)
    {
        temp = temp*10 + (a);
        a=a/10;
    }
    
    return (n==temp);
}

int rev(long long int a)
{
    int ans=0,flag=0;
    while(a>0)
    {
        if(a != 0 || flag==1)
        {
            ans =ans*10 +(a);
            flag= 1;
        }
        
        a=a/10;
    }
    
    return ans;
}



int main() 
{
  int k;
  cin>>k;
  while(k--)
  {
    	int t;
    	cin>>t;
    	t++;
    	while(!palcheck(t))
    	{
    		t++;
		}
		cout<<t<<endl;
	
		

  } 
  return 0;
}

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

int main()
{
	cout<<palcheck(1891);
	return 0;
}

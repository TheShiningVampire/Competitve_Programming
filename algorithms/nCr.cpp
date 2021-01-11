#include <bits/stdc++.h>
using namespace std;

int nCr(int n,int r)
{
    int ans=1;
    for(int i=1;i<r+1;i++)
    {
        ans= ans*(n-i+1)/i;
    }
    
    return ans;
    
}

int main()
{
	cout<<nCr(4,2);
	return 0;
}

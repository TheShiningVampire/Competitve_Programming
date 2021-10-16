#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void printreq(int n)
{
    int a[n][n];
    int level = 0,num = 1;

    while(level < n)
    {
        for(int i = level; i >=0 ; i--)
        {
            a[level - i][i] = num;
            num++;
        }
        level++;
    }
    level--;
    int k = 0;
    while(level >= 0)
    {
        for(int i=n-level; i<n; i++)
        {
            a[i][n - i+k] = num;
            num++;
        }
        level--;
        k++;
    }


    for(int i = 0; i<n ; i++)
    {
        for(int j = 0 ; j< n ; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        printreq(n);
    }



    return 0;
}

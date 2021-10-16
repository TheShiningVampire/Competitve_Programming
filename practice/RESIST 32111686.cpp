#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        
        long long int res_num = 1,res_den = 1, old_res_num = 1, old_res_den = 1;
        while (--n)
        {
            old_res_num = old_res_num + old_res_den;
            res_num = (old_res_num);
            res_den = (old_res_num + old_res_den);
            
            res_num = (res_num)%m;
            res_den = (res_den)%m;
            
            old_res_num = res_num;
            old_res_den = res_den;
        }
        
        cout<<res_num%m<<"/"<<res_den%m<<endl;
        
    }
	return 0;
}

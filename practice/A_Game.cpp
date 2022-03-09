#include <bits/stdc++.h>
using namespace std;

#define int long long

#define endl "\n"

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
int t;
cin>>t;while(t--){
    int l;
    cin>>l;int a[l];
    for(int i=0;i<l;i++){
cin>>a[i];




    }
    int h[120];
    for(int i=0;i<120;i++){
        h[i]=0;
    }
    int jump=0;int pos=0;
    int ans=0;
    for(int i=1;i<l;i++){
        if(a[i]==0){jump+=1;}
        else{jump+=1;
        if(jump==1){
            jump=0;h[1]=1;pos++;
            
            }
        else{
            if(h[jump]==0){ans+=jump;
        h[jump]=1;pos+=jump;
        jump=0;
        }
            }
        }
    }
    if(pos==l-1){ cout<<ans<<endl;}
   else{
       cout<<l-1<<endl;}
}
   return 0;
}
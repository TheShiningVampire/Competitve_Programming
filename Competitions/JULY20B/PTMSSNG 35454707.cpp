#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<set>
#include<map>
#include<stack>
#include<queue>

using namespace std;


typedef long long ll;

      
  
      




int main()
{int t;
cin>>t;
while(t--){
int n;
cin>>n;
int x[4*n],y[4*n];map<int,int>mx,my;

for(int i=0;i<4*n-1;i++){
cin>>x[i]>>y[i];mx[x[i]]++;my[y[i]]++;
}
int q,w;
map<int,int>::iterator itr;
for(itr=mx.begin();itr!=mx.end();itr++){
if(itr->second%2!=0){
 q=itr->first;break;

}
}
for(itr=my.begin();itr!=my.end();itr++){
if(itr->second%2!=0){
     w=itr->first;break;

    
}
}
cout<<q<<" "<<w<<endl;

}
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,sum=0;
    cin>>t;
    while(t--)
    {
        int a[3][2];
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
        
        vector<int> dis(3);
        
        for(int i=1;i<3;i++)
        {
            dis[i] = (pow(a[i][0]-a[i-1][0],2)+pow(a[i][1]-a[i-1][1],2));
        }
        
            dis[0] = (pow(a[0][0]-a[2][0],2)+pow(a[0][1]-a[2][1],2));
        
        sort(dis.begin(),dis.end());
        if(dis[0]+dis[1] == dis[2])
            sum++;    
	
	}
    
    cout<<sum<<endl;
    
	return 0;
}

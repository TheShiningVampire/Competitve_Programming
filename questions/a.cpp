# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<pair <int,int> > points;
    int high , low;
    cin>>low>>high;
    points.push_back(make_pair(low , high));
    t--;
    while(t--)
    {
        int a , b;
        cin>>a>>b;
        for(auto &i : points)
        {
            if((i.first <= a && i.second >= a) || (i.first<=b && i.second >= b ) )
            {
                i.first = max(a,i.first);
                i.second = min(b,i.second);
            } 
            else if((i.second <= a) || (i.first >= b ))
            {
                points.push_back(make_pair(a,b));
            }
        }
    }
    cout<<points.size()<<endl;
    for(auto i:points)
        {
            cout<<(i.first + i.second)/2<<endl;
        }
    return 0;
}
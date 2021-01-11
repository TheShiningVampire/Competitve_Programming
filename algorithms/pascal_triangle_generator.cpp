#include <bits/stdc++.h>
using namespace std;



vector<vector<int> > pascal_generate(int numRows) {
        vector<vector<int> > pascal(numRows);
        
        vector<int> vector1(1,1),vector;
        pascal[0] = vector1;
            
            for(int i=1;i<numRows;i++)
            {
                vector.clear();
                vector.push_back(1);
                    if(i-1!=0)
                    {
                        for(int j=0;j<i-1;j++)
                        vector.push_back(vector1[j]+vector1[j+1]);                        
                    }
                vector.push_back(1);
                vector1 = vector;
                pascal[i] = vector;
            }
        return pascal;
    }

int main()
{
	vector<vector<int> > five;
	five = pascal_generate(5);
	for(int i=0;i<five.size();i++)
	{
		for(int j=0;j<five[i].size();j++)
		{
			cout<<five[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

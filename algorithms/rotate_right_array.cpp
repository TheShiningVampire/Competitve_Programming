#include <bits/stdc++.h>
using namespace std;


   void rotateone(vector<int>& nums)
    {
        int temp=nums[nums.size()-1];
        {
            for(int i=nums.size()-1;i>=0;i--)
            {
                nums[i+1] = nums[i];
            }
            nums[0] = temp;
        }
    }
    
    void rotate(vector<int>& nums, int k) {       
        
        for(int i=0;i<k%nums.size();i++)
        {
            rotateone(nums);
        }
    }


int main() {
	
    	int t;
    	cin>>t;
	vector<int> a(t);
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	int n;
	cin>>n;
	rotate(a,n);
	for(int i=0;i<t;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}


#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
	queue<int> q;
	stack<int> s;
	
	int arr[] = {1,3,5,7,9,2,4,6,8};
	for(int i=0;i<9;i++)
	{
		q.push(arr[i]);
		s.push(arr[i]);
	}
	cout<<"Printing Queue: "<<endl;
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	
	
	cout<<endl<<"Printing Stack: "<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	
}


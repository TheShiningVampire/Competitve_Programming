#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 0;
		cin >> n;
		set<int> a;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++)
		{
			if (a.find(arr[i]) != a.end())
			{
				cout << "NO" << endl;
				flag = 1;
				break;
			}
			else
			{
				a.insert(arr[i]);
			}
		}
		if (flag == 0)
			cout << "YES" << endl;
	}
	return 0;
}

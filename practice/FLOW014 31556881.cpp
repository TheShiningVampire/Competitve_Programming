#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		float a[3];
		for (int i = 0; i < 3; i++)
		{
			cin >> a[i];
		}

		if (a[0] > 50 && a[1] < 0.7 && a[2] > 5600)
			cout << "10" << endl;
		else if (a[0] > 50 && a[1] < 0.7)
			cout << "9" << endl;
		else if (a[1] < 0.7 && a[2] > 5600)
			cout << "8" << endl;
		else if (a[0] > 50 && a[2] > 5600)
			cout << "7" << endl;
		else if (a[0] > 50 || a[1] < 0.7 || a[2] > 5600)
			cout << "6" << endl;
		else
			cout << "5" << endl;
	}

	return 0;
}

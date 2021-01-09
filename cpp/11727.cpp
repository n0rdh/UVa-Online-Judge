
#include <iostream>

using namespace std;

int main()
{
	int iterations, count = 0;
	cin >> iterations;
	int employees[3];
	while (iterations--)
	{
		count++;
		for (int i = 0; i < 3; i++)
		{
			cin >> employees[i];
		}
		bool change;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (employees[i] > employees[j])
				{
					int bigger = employees[i];
					employees[i] = employees[j];
					employees[j] = bigger;
				}
			}
		}
		cout << "Case " << count << ": " << employees[1] << endl;
	}
	return 0;
}

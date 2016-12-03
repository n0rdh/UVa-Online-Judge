
#include <iostream>

using namespace std;

int main()
{
	int iterations;
	int cases = 0;
	cin >> iterations;
	while (iterations--)
	{
		cases++;
		int count;
		cin >> count;
		int jump, first, high = 0, low = 0;
		cin >> first;
		count--;
		while (count > 0)
		{
			cin >> jump;
			if (jump > first)
			{
				high++;
			}
			else if (jump < first)
			{
				low++;
			}
			first = jump;
			count--;
		}
		cout << "Case " << cases << ": " << high << " " << low << endl;
	}
	return 0;
}

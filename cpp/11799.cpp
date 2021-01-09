
#include <iostream>

using namespace std;

int main()
{
	int iterations = 0, cases =0;
	cin >> iterations;
	while (iterations > 0)
	{
		cases++;
		int first, max, dalsi;
		cin >> first;
		max = first;
		while (first > 0)
		{
			cin >> dalsi;
			if (max < dalsi)
			{
				max = dalsi;
			}
			first--;
		}
		cout << "Case " << cases << ": " << max << endl;
		iterations--;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	char cells[100];
	int iterations, cases = 0;
	cin >> iterations;
	while (iterations--)
	{
		cases++;
		int dimension, period;
		cin >> dimension;	
		period = dimension;
		dimension *= dimension;
		for (int i = 0; i < dimension ; i++)
		{
			cin >> cells[i];
		}
		for (int i = 0; i < dimension; i++)
		{
			if (cells[i] == '.')
			{
				cells[i] = 'A';
				while (true)
				{
					if (i - period < 0 && i - 1 < 0)
					{
						if (cells[i + 1] != cells[i]
							&& cells[i + period] != cells[i])
						{
							break;
						}
					}
					else
					{
						if (cells[i + 1] != cells[i]
							&& cells[i - 1] != cells[i]
							&& cells[i + period] != cells[i]
							&& cells[i - period] != cells[i])
						{
							break;
						}
					}
					cells[i]++;
				}
			}
		}
		int riadok = 0;
		cout << "Case " << cases << ":" << endl;
		for (int i = 0; i < dimension; i++)
		{
			riadok++;
			cout << cells[i];
			if (riadok == period)
			{
				cout << endl;
				riadok = 0;
			}
		}
	}
	return 0;
}
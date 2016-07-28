#include <iostream>

using namespace std;

int main()
{
	int matrix[100][100], n, i, j;

	while (cin >> n)
	{
		if (n == 0)
			break;

		for (i = 0; i < 100; i++)
			for (j = 0; j < 100; j++)
				matrix[i][j] = 0;

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> matrix[i][j];

		int Row[100], Column[100];

		for (i = 0; i < 100; i++)
			Row[i] = Column[i] = 0;

		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
			{
				Column[i] += matrix[i][j];
				Row[j] += matrix[i][j];
			}

		int ER(0), EC(0), er, ec;

		for (i = 0; i < n; i++)
		{
			if (Row[i] & 1)
			{
				ER++;
				er = i;
			}
			if (Column[i] & 1)
			{
				EC++;
				ec = i;
			}
		}

		if (ER == 0 && EC == 0)
			cout << "OK" << endl;
		else if (ER == 1 && EC == 1)
			cout << "Change bit (" << ec + 1 << "," << er + 1 << ")" << endl;
		else
			cout << "Corrupt" << endl;
	}


	return 0;
}

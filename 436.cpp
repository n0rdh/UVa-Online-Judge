
#include <iostream>
#include <string>
#include <map>
#include <cmath>

using namespace std;

int main()
{
	int n(0), m(0), caso(1);
	double M[30][30];
	map<string, int> ind;
	string s1, s2;
	double x;
	bool exists;

	while (1)
	{
		cin >> n;
		if (n == 0) break;
		ind.clear();
		for (int i(0); i < n; i++)
		{
			cin >> s1;
			ind[s1] = i;
		}
		for (int i(0); i < 30; i++)
		{
			for (int j(0); j < 30; j++)
			{
				M[i][j] = 0;
			}
		}
		cin >> m;
		for (int i(0); i < m; i++)
		{
			cin >> s1 >> x >> s2;
			M[ind[s1]][ind[s2]] = x;
		}
		for (int k(0); k < n; k++)
			for (int i(0); i < n; i++)
				for (int j(0); j < n; j++)
				{
					M[i][j] = fmax(M[i][j], M[i][k]*M[k][j]);
				}
		exists = false;
		for (int i(0); i < n; i++) if (M[i][i] > 1.0) exists = true;
		cout << "Case " << caso << ": ";
		caso++;
		if (exists) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}

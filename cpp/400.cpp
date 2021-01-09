
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

bool compare(const string &s1, const string &s2)
{
	return s1.length() < s2.length();
}

int main()
{
	size_t N;
	while (cin >> N)
	{
		vector<string> files(N);

		for (size_t i = 0; i < N; ++i)
			cin >> files[i];

		sort(files.begin(), files.end());
		size_t L = max_element(files.begin(), files.end(), compare)->length();
		size_t C = (60 - L) / (L + 2) + 1;
		size_t R = (N + C - 1) / C;

		for (int i(0); i < 60; i++)
			cout << "-";
		cout << endl;

		for (size_t i(0); i < R; ++i)
		{
			for (size_t j(i); j < N; j += R)
				cout << setw(L + 2) << setiosflags(ios::left) << files[j];
			cout << endl;
		}
	}

	return 0;
}

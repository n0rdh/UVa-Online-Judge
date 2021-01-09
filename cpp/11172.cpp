
#include <iostream>

using namespace std;

int main()
{
	int iterations = 0, first, second;
	cin >> iterations;
	while (iterations--)
	{
		cin >> first;
		cin >> second;
		if (first > second) cout << ">" << endl;
		if (first < second) cout << "<" << endl;
		if (first == second) cout << "=" << endl;
	}
	return 0;
}
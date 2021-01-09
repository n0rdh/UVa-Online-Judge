#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	string input;

	while (cin >> input)
	{
		if (input == "0") break;
		int n(input.size());
		int output(0);
		for (int i(0); i < n; i++)
			output += ((int)input[i] - 48) * (pow(2, n - i) - 1);
		cout << output << endl;
	}

	return 0;
}

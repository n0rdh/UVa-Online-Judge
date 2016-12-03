
#include <iostream>

using namespace std;

int main()
{
	int iterations;
	cin >> iterations;
	int input1, input2;
	while (iterations > 0)
	{
		cin >> input1;
		cin >> input2;
		int vysledok = (input1 / 3) * (input2 / 3);
		iterations--;
		cout << vysledok << endl;
	}
	return 0;
}
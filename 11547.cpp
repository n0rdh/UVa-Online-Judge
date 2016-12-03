
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input1;
	while (getline(cin, input1))
	{
		if (input1 == "0") break;
		int prve = 0, druhe = 0;
		for (int i = 0; i < input1.length(); i++)
		{
			prve += input1[i] - '0';
		}
		while (prve > 9)
		{
			druhe = prve / 10;
			druhe += prve % 10;
			prve = druhe;
		}
		cout << prve << endl;
	}
	return 0;
}

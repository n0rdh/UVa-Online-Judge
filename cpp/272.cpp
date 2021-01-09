
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int j = 0;
	while (getline(cin, str))
	{
		for (int i = 0 ; i < str.length(); i++ ) 
		{
			if (str[i] == '\"')
			{
				if (j == 0)
				{
					cout << '`' << '`';
					j = 1;
				}
				else
				{
					cout << '\'' << '\'';
					j = 0;
				}
			}
			else 
			{
				cout << str[i];
			}
		}
		cout << endl;
	}
	return 0;
}
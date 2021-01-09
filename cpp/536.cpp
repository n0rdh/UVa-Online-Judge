
#include <iostream>
#include <string>

using namespace std;

string str1;
string str2;

string f(int n, int m, int p, int q)
{
	int a(str2.find(str1[n]));
	int b(-1);
	string output("");

	if (a != p)
	{
		b = n;
		while (b <= m && str2.find(str1[b + 1]) < a) b++;
		if (b != n) output += f(n + 1, b, p, a - 1);
	}
	if (a != q)
	{
		if (b != -1) output += f(b + 1, m, a + 1, q);
		else output += f(n + 1, m, a + 1, q);
	}
	output += str1[n];
	return output;
}

int main()
{
	while (cin >> str1 >> str2)
		cout << f(0, str1.size() - 1, 0, str1.size() - 1) << endl;
	return 0;
}

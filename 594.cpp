
#include <iostream>
#include <vector>
#include <map>

using namespace std;

long endianSol(long x)
{
	long temp(0);
	for (int i(0); i < 32; i++)
		if (x & (1 << i))
			temp |= 1 << (3 - i / 8) * 8 + (i % 8);
	return temp;
}

int main()
{
	long x;
	while (cin >> x)
		cout << x << " converts to " << endianSol(x) << endl;
	return 0;
}

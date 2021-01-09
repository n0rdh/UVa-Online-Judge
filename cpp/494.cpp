
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i, c, w;
	string a;
	while (getline(cin, a))
	{
		c = 0;
		w = 1;
		for (i = 0;a[i];i++)
		{
			if ((a[i] >= 'A'&&a[i] <= 'Z') || (a[i] >= 'a'&&a[i] <= 'z'))
			{
				if (w)
				{
					c++;
				}
				w = 0;
			}
			else
			{
				w = 1;
			}
		}
		printf("%d\n", c);
	}
	return 0;
}
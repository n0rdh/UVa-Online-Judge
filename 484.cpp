
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n;
	map<int, int> occurance;
	map<int, int>::iterator iter;
	vector<int> filter;

	while (cin >> n)
	{
		iter = occurance.find(n);
		if (iter == occurance.end())
		{
			filter.push_back(n);
			occurance.insert(pair<int, int>(n, 1));
		}
		else iter->second += 1;
	}

	for (int i(0); i < filter.size(); i++)
		cout << filter[i] << " " << occurance[filter[i]] << endl;

	return 0;
}

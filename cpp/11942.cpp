
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool inputFunction()
{
	int seq = 0;
	int container[10]; 
	bool outputf = false;

	for (int i = 0; i < 10; i++)
	{
		cin >> container[i];
	}
	if (container[0] < container[1])
	{
		seq = 0;
	}
	else
	{
		seq = 1;
	}
	int prev = container[1];

	for (int i = 2; i < 10; i++)
	{
		if (prev < container[i] && seq == 0)
		{
			outputf = true;
			prev = container[i];
			continue;
		}
		else if (prev > container[i] && seq == 1)
		{
			outputf = true;
			prev = container[i];
		}
		else
		{
			outputf = false;
			break;
		}
	}
	return outputf;
}

int main()
{
	int iterations, iterOutput;
	bool output = false;
	cin >> iterations;
	iterOutput = iterations;
	int results[20];
	for (int i = 0; i < 20; i++)
	{
		results[i] = 0;
	}

	while (iterations > 0)
	{
		if (inputFunction())
		{
			results[iterations-1] = 1;
		}
		iterations--;
	}
	cout << "Lumberjacks:" << endl;
	for (int i = iterOutput-1; i >= 0; i--)
	{
		cout << ((results[i]) ? "Ordered" : "Unordered") << endl;
	}
	
	return 0;
}

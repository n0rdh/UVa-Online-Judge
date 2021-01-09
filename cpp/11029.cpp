#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <iostream>

using namespace std;

static const int DIGITS_NUM = 3;
typedef unsigned long long int lli_t;

static int numPowMod(lli_t number, int power,
	const int modulo)
{
	int result(1);
	while (power > 0)
	{
		if (power & 1)
			result = (result * number) % modulo;

		number = (number * number) % modulo;
		power >>= 1;
	}
	return result;
}

static int getLastNDigits(const lli_t number, const int power,
	const int digitsNum)
{
	return numPowMod(number, power, std::pow(10, digitsNum));
}

static int getFirstNDigits(const lli_t number, const int power,
	const int digitsNum)
{
	const double finalResLog10(power * log10(static_cast<int>(number)));
	return static_cast<int>(floor(pow(10,(finalResLog10 - floor(finalResLog10)) + (digitsNum - 1))));
}

int main()
{
	int testCasesNum;
	cin >> testCasesNum;

	while (testCasesNum--)
	{
		lli_t number;
		int power;
		cin >> number >> power;
		cout << getFirstNDigits(number, power, DIGITS_NUM)
			<< "..." << setfill('0') << setw(DIGITS_NUM)
			<< getLastNDigits(number, power, DIGITS_NUM) << endl;
	}
	return EXIT_SUCCESS;
}


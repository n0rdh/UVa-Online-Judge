
#include <iostream>

using namespace std;

int main()
{
	int participants(0), budget(0), hotels(0), weeks(0);
	while (cin >> participants >> budget >> hotels >> weeks)
	{
		int prise, available(budget + 1), bed, prise_of_hotel;
		while (hotels--)
		{
			cin >> prise;
			bool beds_ok = false;
			int weekcounter = weeks;
			while (weekcounter--)
			{
				cin >> bed;
				if (bed >= participants)
				{
					beds_ok = true;
				}
			}
			if (!beds_ok)
			{
				continue;
			}

			prise_of_hotel = prise * participants;

			if (prise_of_hotel < available)
			{
				available = prise_of_hotel;
			}
		}
		if (available < budget + 1)
		{
			cout << available << endl;
		}
		else
		{
			cout << "stay home" << endl;
		}
	}
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int counter = 0;
	int max_length = 0;
	char all[100][100];
	char input[100];

	for (int i = 0; i < 100; i++)
		memset(all[i], ' ', 100);

	while (cin.getline(input, 256)) {
		int _length = strlen(input);
		if (_length > max_length)
			max_length = _length;

		for (int i = 0; i < _length; i++) {
			all[counter][i] = input[i];
		}

		counter++;
	}

	for (int i = 0; i < max_length; i++) {
		for (int y = counter - 1; y >= 0; y--) {
			cout << all[y][i];
		}
		cout << endl;
	}

	return 0;
}
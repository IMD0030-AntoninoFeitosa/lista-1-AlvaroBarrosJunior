#include <iostream>
using std::cin;
using std::cout;
using std::endl;

const int SIZE = 5; // input size.

int main(void)
{
	int negativos = 0;

	for (int i = 0; i < SIZE; i++)
	{
		int temp;
		cin >> temp;
		if (temp < 0)
		{
			negativos++;
		}
	}

	cout << negativos << endl;

	return 0;
}

#include<iostream>
using namespace std;

int main(void)
{
	const int COUNT = 10;

	int average = 0, mode = 0;
		int* number = new int[COUNT];
		int* count = new int[1001]{0,};
		int max = 0;

	for (int i = 0; i < COUNT; i++)
	{
		cin >> number[i];
		average += number[i];
	}

	for (int i = 0; i < COUNT; i++)
		count[number[i]]++;

	for (int i = 0; i < 1000; i++)
	{
		if (count[i] >= max)
		{
			max = count[i];
			mode = i;
		}
	}

	average /= 10;
	cout << average << '\n' << mode;
	return 0;
}
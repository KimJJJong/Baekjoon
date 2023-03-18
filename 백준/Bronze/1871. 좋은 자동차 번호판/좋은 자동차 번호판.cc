#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(void)
{
	int N;	cin >> N;
	while (N--)
	{
		string set;	cin >> set;
		int value_c = 0;
		int  back_n;


		for (int i = 0; i < 3; i++)
		{
			value_c = value_c + ((int)set[i] - 65) * pow(26, 2 - i);
		}
		set.erase(0, 4);
		back_n = stoi(set);

		if (abs(value_c - back_n) <= 100)
			cout << "nice" << '\n';
		else
			cout << "not nice" << '\n';

	}
	return 0;
}

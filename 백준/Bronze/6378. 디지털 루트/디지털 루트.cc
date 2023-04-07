#include<iostream>
#include<string>
using namespace std;

int main(void)
{

	string input;

	while (true)
	{
		cin >> input;
		if (input == "0")
			break;

		while (input.length() > 1)
		{
			int sum = 0;
			for (int i = 0; i < input.length(); i++)
				sum += input[i] - '0';

			input = to_string(sum);
		}

		cout << input << endl;
	}
	return 0;
}
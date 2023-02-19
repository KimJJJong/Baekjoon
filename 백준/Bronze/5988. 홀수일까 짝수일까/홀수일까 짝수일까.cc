#include<iostream>
using namespace std;

int main(void)
{
	int c;
	string input;

	cin >> c;

	while (c--)
	{
		cin >> input;
		if (input.back() % 2 == 0)
			cout << "even"<<'\n';
		else
			cout << "odd"<<'\n';
	}

	return 0;
}
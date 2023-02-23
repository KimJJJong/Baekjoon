#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string input;
	int T, A, B;
	cin >> input;

		cin >> T;
		while (T--)
		{
			cin >> A >> B;
			swap(input[A], input[B]);
		}
		cout << input;

	return 0;
}
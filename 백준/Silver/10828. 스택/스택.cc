#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int* arry = new int[10001];
	static int N = -1;
	int Count;	cin >> Count;

	while (Count--)
	{

		string input;	cin >> input;

		if (input == "push")
		{
			N++;
			cin >> arry[N];
		}
		else if (input == "pop")
		{
			if (N >= 0)
			{
				cout << arry[N] << '\n';
				N--;
			}
			else
			{
				N = -1;
				cout << N << '\n';
			}
		}
		else if (input == "size")
			cout << N + 1<<'\n';
		else if (input == "top")
		{
			if (N == -1)
				cout << N << '\n';
			else
				cout << arry[N] << '\n';

		}
		else if (input == "empty")
			if (N == -1)
				cout << 1<<'\n';
			else
				cout << 0<<'\n';


	}

	return 0;
}
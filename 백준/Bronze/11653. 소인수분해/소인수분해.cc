#include<iostream>
using namespace std;

int main(void)
{
	long long N;	cin >> N;
	long long value=N;
	
	for (int i = 2; i <= N; i++)
	{
		if (value % i == 0)
		{
			value /= i;
			cout << i << '\n';
			i--;
		}

	}
	return 0;
}
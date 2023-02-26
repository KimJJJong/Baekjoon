#include<iostream>
using namespace std;

int main(void)
{
	int N;
	int l = -1;
	cin >> N;

	for (int i = 0; i < N * 2 - 1; i++)
	{
		if (i < N)
			l++;
		else
			l--;
		for (int j=N-l-1;j>0;j--)
		{
			cout << ' ';
		}
		for (int k =0; k <l*2+1; k++)
		{
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}
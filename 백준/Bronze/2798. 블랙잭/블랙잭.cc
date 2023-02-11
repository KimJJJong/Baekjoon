#include<iostream>
using namespace std;

int main(void)
{
	int N, M;
	cin >> N >> M;
	int* arry = new int[N];
	int ans,big=-1;

	for (int i = 0; i < N; i++)
		cin >> arry[i];

	for (int i = 0; i < N-2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				ans = arry[i] + arry[j] + arry[k];
				if (ans <= M && ans > big)
					big = ans;
			}
		}
	}

	cout << big;
	return 0;
}
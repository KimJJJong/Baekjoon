#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int* lay = new int[100];
	int N, M;
	int i, j;
	int tmp;

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		lay[i] = i;
	while (M--)
	{
		cin >> i >> j;
		tmp = lay[i];
		lay[i] = lay[j];
		lay[j] = tmp;
	}
	for (int i = 1; i <= N; i++)
		cout << lay[i] << ' ';
	return 0;
}
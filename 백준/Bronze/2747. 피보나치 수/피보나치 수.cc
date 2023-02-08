#include<iostream>
using namespace std;

int main(void)
{
	int A=0, B=1, C,N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		C = A + B;
		A = B;
		B = C;
	}
	cout << A;
	return 0;
}
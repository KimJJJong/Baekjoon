#include<iostream>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	int Fir, Sec;

	while (N--)
	{
		int TotalPrice_F = 0;
		int TotalPrice_S = 0;
		cin >> Fir >> Sec;
		if (Fir == 0) TotalPrice_F = 0;
		else if (Fir <= 1)	TotalPrice_F += 5000000;
		else if (Fir <= 3)	TotalPrice_F += 3000000;
		else if (Fir <= 6)	TotalPrice_F += 2000000;
		else if (Fir <= 10)	TotalPrice_F += 500000;
		else if (Fir <= 15)	TotalPrice_F += 300000;
		else if (Fir <= 21)	TotalPrice_F += 100000;

		if(Sec==0)TotalPrice_S = 0;
		else if (Sec <= 1)	TotalPrice_S += 5120000;
		else if (Sec <= 3)	TotalPrice_S += 2560000;
		else if (Sec <= 7)	TotalPrice_S += 1280000;
		else if (Sec <= 15)	TotalPrice_S += 640000;
		else if (Sec <= 31)	TotalPrice_S += 320000;

		cout << TotalPrice_F + TotalPrice_S << '\n';
	}
	return 0;
}
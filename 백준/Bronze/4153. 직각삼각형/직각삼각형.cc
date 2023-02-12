#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int A = 1, B = 1, C = 1;
	int big, mid, sma;
	while (true)
	{
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0)
			break;
		big = max(A, max(B,C));
		sma = min(A, min(B, C));
		if (A != big && A != sma) mid = A;
		else if (B != big && B != sma) mid = B;
		else if (C != big && C != sma)mid = C;
		if (pow(big,2)==pow(mid,2)+pow(sma,2))
			cout << "right" << '\n';
		else
			cout << "wrong" << '\n';
	}

	return 0;
}
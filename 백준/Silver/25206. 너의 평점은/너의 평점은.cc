#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	const int N = 20;
	int div=0;
	double sco, creadit_n;
	double total = 0;
	string name, creadit;
	for (int i = 0; i < N; i++)
	{
		cin >> name >> sco >> creadit;
		if (creadit == "A+")
			creadit_n = 4.5;
		else if (creadit == "A0")
			creadit_n = 4.0;
		else if (creadit == "B+")
			creadit_n = 3.5;
		else if (creadit == "B0")
			creadit_n = 3.0;
		else if (creadit == "C+")
			creadit_n = 2.5;
		else if (creadit == "C0")
			creadit_n = 2.0;
		else if (creadit == "D+")
			creadit_n = 1.5;
		else if (creadit == "D0")
			creadit_n = 1.0;
		else if (creadit == "F")
			creadit_n = 0.0;
		else if (creadit == "P")
		{
			div -= sco;
			creadit_n = 0.0;
		}
		div += sco;
		total += sco * creadit_n;
	}
	cout << total / div;
	return 0;
}
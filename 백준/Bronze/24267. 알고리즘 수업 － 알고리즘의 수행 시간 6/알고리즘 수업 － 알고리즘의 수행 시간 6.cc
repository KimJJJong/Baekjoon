#include<iostream>
using namespace std;

int main(void)
{
	long long n,count=0;	cin >> n;


	cout <<(n*(n-1)*(n-2))/6 <<'\n' << "3" ;

	return 0;
}

/*
	for (int i = 1; i <= n - 2;i++)
	{
		cout << i << "   "<<'\n';
		for (int j = i + 1; j <= n - 1; j++)
		{
			cout << j << " : ";
			for (int k = j + 1; k <= n; k++)
			{
				cout << k << "  ";
				count++;
			}
		cout << '\n';
		}
	}*/
#include<iostream>
using namespace std;

int main(void)
{
	long long n;		cin >> n;
	long long count = 0;
/*
	for (int i = 1; i < n ; i++)		//1~(n-1) 까지의 합
		for (int j = i ; j < n; j++)
			count++;
*/
	//코드1 수행 횟수 == n*(n-1)/2==	(pow(n,2)-n)/2		최 고차항은 n 제곱으로 최고차항의 차수는 2;
	cout << n * (n - 1) / 2 <<'\n'<<'2';

	return 0;
}
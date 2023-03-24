#include<iostream>
using namespace std;

int main(void)
{
	int A, B;
	long long V, day;
	cin >> A >> B >> V;

	day = (V -B-1) / (A - B)+1;		//V-B 에 -1 을 한 이유는 나누어 떨어지지 않는 구간까지 고려한 결과이다.



	cout << day;

	return 0;
}
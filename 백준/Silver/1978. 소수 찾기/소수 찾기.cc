#include <iostream>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	
	return true;
}

int main(void)
{
	int N;
	cin >> N;
	int check_min = 0;

	while (N > 0)
	{
		int num;
		cin >> num;
		if (isPrime(num) == true&&num!=1)
			check_min++;
		N--;
	}
	cout << check_min;
	return 0;
}
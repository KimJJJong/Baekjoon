#include<iostream>
#include <queue>
using namespace std;
queue<int> arry;

int main() {
	int N, K;
	cin >> N>>K;

	for (int i = 1; i <= N; i++)
	{
		arry.push(i);
	}


	int count = N - 1;

	cout << "<";

	while (count--)
	{
		for (int i = 0; i < K-1 ; i++)
		{
			arry.push(arry.front());
			arry.pop();
		}
		cout << arry.front() << ", ";
		arry.pop();
	}


	cout << arry.front() << ">";
	arry.pop();

	return 0;
}
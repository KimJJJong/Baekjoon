#include<iostream>
using namespace std;

int main(void)
{
	int input;
	int budget=1000;
	int coin = 0;

	cin >> input;
	budget-= input;

	coin+=budget / 500;
	budget %= 500;

	coin += budget / 100;
	budget %= 100;

	coin += budget / 50;
	budget %= 50;

	coin += budget / 10;
	budget %= 10;

	coin += budget / 5;
	budget %= 5;

	coin += budget / 1;
	
	cout << coin;


	return 0;
}
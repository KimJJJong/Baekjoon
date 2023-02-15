#include<iostream>
using namespace std;

int main(void)
{
	int N;
	string name;

	cin >> N;
	while (N--)
	{
		cin >> name;
		for (int i = 0; i < name.length(); i++)
		{
			if (name[i] >= 65 && name[i] <= 90) // 대문자
				name[i] += 32;

			cout << name[i] ;
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	char arry[8][8];
	int num = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> arry[i][j];
		}
	}
	for (int i = 0; i < 8; i++)
	{

		for (int j = 0; j < 8; j++)
		{
			if ((arry[i][j] == 'F'&&j%2==0&&i%2==0)||(arry[i][j] == 'F' && j % 2 == 1 && i% 2 == 1))
				num++;
		}
	}
	cout<<num;
	return 0;
}
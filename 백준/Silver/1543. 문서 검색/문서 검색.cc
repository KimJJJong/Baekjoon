#include<iostream>
#include<string>

using namespace std;

int main(void)
{


	string get, find;		//문서의 내용, 찾고싶은 단어
	int num = 0;
	int ans = 0;			//같은 단어의 갯수
	int find_n;

	getline(cin, get);	//공백 포함 문서
	getline(cin, find);

	find_n = find.length();	//찾아야할 단어의 길이
	int i = 0;
	for (i; i < get.length(); i++)
	{
		num = 0;
		if(get[i]==find[0])
			for (int j = 0; j < find.length(); j++)
			{
				if (get[i + j] == find[j])
					num++;
				else
					break;
			}
		if (find_n == num)
		{
			ans++;

			i += find_n-1;
		}
	}
	cout << ans;
	return 0;
}
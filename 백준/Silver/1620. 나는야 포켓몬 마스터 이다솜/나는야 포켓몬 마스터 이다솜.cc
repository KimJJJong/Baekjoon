#include <iostream>
#include<sstream>
#include<string>
#include<map>
using namespace std;

map<string, int>m;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	string* arrN = new string[N + 1];
	for (int i = 1; i <= N; i++)
	{
		cin >> arrN[i];
		m.insert({arrN[i],i});
	}



	for (int i = 0; i < M; i++)
	{

		string value;
		cin >> value;


		if (m.find(value) != m.end())
		{
			cout << m.find(value)->second << '\n';
		}
		else
			cout << arrN[stoi(value)] << '\n';
		
	}

	return 0;
}
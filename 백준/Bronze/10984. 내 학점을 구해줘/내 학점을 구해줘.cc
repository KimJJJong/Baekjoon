#include<iostream>
using namespace std;

int main(void)
{
	int T; cin >> T;
	while (T--)
	{
		int many=0;
		double credit=0;
		int N; cin >> N;
		for(int i=0;i<N;i++)
		{
			double a, b;
			cin >> a >> b;
			many += a;
			credit += b*a;
		}
		cout.precision(2);
		cout << many << ' ' << credit/many << '\n';
	}
	

	return 0;
}
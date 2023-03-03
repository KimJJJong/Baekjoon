#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 1; i <= N; i++)
	{
		string input, tmp,ans;
		stack<string>stack;
		getline(cin, input);

		for (int j =0; j < input.length(); j++)
		{
			if (input[j] == ' ')
			{
				stack.push(tmp);
				stack.push(" ");
				tmp.clear();


			}
			else
				tmp += input[j];
		}
		stack.push(tmp);

		while (!stack.empty())
		{
			ans += stack.top();
			stack.pop();
		}
		cout << "Case #" << i << ": " << ans << "\n";
	}

	return 0;
}
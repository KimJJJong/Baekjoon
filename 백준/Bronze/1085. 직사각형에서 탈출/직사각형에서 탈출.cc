#include<iostream>
#include<cmath>
using namespace std;

int main(void)
{
	int x, y, w, h;	cin >> x >> y >> w >> h;
	int ans1,ans2,ans;

	ans1 = (x >= w - x ? w - x : x);
	ans2 = (y >= h - y ? h - y : y);
	ans = (ans1 >= ans2 ? ans2 : ans1);

	cout << ans;

	return 0;
}
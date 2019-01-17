// Accepted
// 455A - Boredom

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	vector<long long> dp(100001,0);
	vector<long long> count(100001,0);
	int val;
	for (int i = 0; i < num; ++i)
	{
		cin >> val;
		count.at(val)++;
	}

	dp.at(1)=count.at(1);
	for (int i = 2; i <= 100000; ++i)
	{
		dp.at(i)=max(dp.at(i-1),dp.at(i-2)+count.at(i)*i);
	}
	cout << dp.at(100000) << endl;


	return 0;
}
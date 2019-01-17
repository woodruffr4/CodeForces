// Accepted
// 160A - Twins

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<int> list;
	int val;
	int total=0;
	for (int i = 0; i < num; ++i)
	{
		cin >> val;
		total+=val;
		list.push_back(val);
	}
	std::sort(list.begin(),list.end(),greater<int>());
	int amount = 0;
	int taken=0;
	for (vector<int>::iterator i = list.begin(); i != list.end(); ++i)
	{
		amount+=*i;
		taken++;
		if(amount>(total-amount)) break;
	}
	cout << taken << endl;

	return 0;
}
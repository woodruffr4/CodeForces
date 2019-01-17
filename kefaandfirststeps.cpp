// Accepted
// 580A - Kefa and First Steps

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	vector<int> list;
	int val;
	for (int i = 0; i < num; ++i)
	{
		cin >> val;
		list.push_back(val);
	}
	if(list.size() == 1) {
		cout << "1" << endl;
		return 0;
	}
	int m=1;
	int count=1;
	for (int i = 0; i < list.size()-1; ++i)
	{
		if(list.at(i)<=list.at(i+1)) {
			count++;
		} else {
			count = 1;
		}
		m = max(count,m);
	}

	cout << m << endl;
	return 0;
}
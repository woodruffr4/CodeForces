// Accepted
// 337A - Puzzles

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int students,puzzles;
	cin >> students >> puzzles;
	vector<int> list;
	int val;
	for (int i = 0; i < puzzles; ++i)
	{
		cin >> val;
		list.push_back(val);
	}
	sort(list.begin(), list.end());
	int res=list.at(students-1)-list.at(0);
	for (int i = 0; i <= puzzles-students; ++i)
	{
		res = min(res, list.at(students+i-1)-list.at(i));
	}
	cout << res << endl;
	return 0;
}
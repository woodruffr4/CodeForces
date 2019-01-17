// Accepted
// 136A - Presents

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	vector<int> v(num,0);
	int val;
	for (int i = 1; i <= num; ++i)
	{
		cin >> val;
		v.at(val-1) = i;
		
	}
	for (int i = 0; i < num; ++i)
	{
		if(i==num-1) {
			cout << v.at(i) << endl;
		} else {
			cout << v.at(i) << " " ;
		}
	}
	return 0;
}
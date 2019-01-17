// Accepted
// 110A - Nearly Lucky Number

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	string line;
	cin >> line;
	vector<int> list;
	long long num=0;
	for (int i = 0; i < line.size(); ++i)
	{
		if(line.at(i)=='4' || line.at(i)=='7') num+=1;
	}
	string str = to_string(num);
	for (int i=0;i<str.size();i++)
	{
		if(str.at(i)!='4' && str.at(i)!='7') {
			cout << "NO" << endl;
			return 0;
		}
	
	}
	cout << "YES" << endl;
	return 0;
}

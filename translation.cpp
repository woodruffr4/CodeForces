// Accepted
// 41A - Translation

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string a,b;
	cin >> a >> b;
	if(a.size()!=b.size()) {
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < a.size(); ++i)
	{
		if(a.at(i)!=b.at(a.size()-1-i)) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
// Accepted
// 116A - Tram

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int cap = 0;
	int on,off,num,res=0;
	cin >> num;
	for (int i = 0; i < num; ++i)
	{
		cin >> off;
		cin >> on;
		cap-=off;
		cap+=on;
		res=max(cap,res);
	}
	cout << res << endl;
	return 0;
}
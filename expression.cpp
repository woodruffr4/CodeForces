// Accepted
// 479A - Expression

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;
	cin >> a >> b >> c;
	int res = 0;
	int val =(a+b)*c;
	res = max(res, val);
	val = (a*b*c);
	res = max(res, val);
	val = a+b+c;
	res = max(res, val);
	val = a*(b+c);
	res = max(res, val);
	cout << res << endl;

	return 0;
}
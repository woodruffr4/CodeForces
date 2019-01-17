// Accepted
// 61A - Ultra-Fast Mathematician

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char a[100];
	char b[100];
	cin >> a >> b;
	for (int i = 0; i < 100; ++i)
	{
		if(a[i]=='\0') break;
		if(a[i]!=b[i]) cout << 1;
		else cout << 0;
	}
	cout << endl;
	return 0;
}
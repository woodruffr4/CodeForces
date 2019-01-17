// Accepted
// 69A - Young Physicist

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	int x=0,y=0,z=0,curx=0,cury=0,curz=0;
	for (int i = 0; i < num; ++i)
	{
		cin >> curx;
		x+=curx;
		cin >> cury;
		y+=cury;
		cin >> curz;
		z+=curz;
	}
	if(x == 0 && y == 0 && z == 0) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
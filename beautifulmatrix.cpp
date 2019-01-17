// Accepted
// 263A - Beautiful Matrix

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x = 0;
	int y = 0;
	int num;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin>>num;
			if(num==1) {
				x = i;
				y = j;
			}
		}
	}
	cout << abs(x-2)+abs(y-2) << endl;
	return 0;
}
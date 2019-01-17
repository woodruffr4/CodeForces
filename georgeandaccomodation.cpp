// Accepted
// 467A - George and Accomodation

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	int x=0,y=0,res=0;
	for (int i = 0; i < num; ++i)
	{
		cin >> x;
		cin >> y;
		if((x+1)<y) res++;
	}
	cout << res << endl;
	return 0;
}
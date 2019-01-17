// Accepted
// 1008B - Turn the Rectangles

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int check=-1;
	bool valid = true;
	for (int i = 0; i < num; ++i)
	{
		int one, two;
		cin >> one >> two;
		int a = min(one,two);
		int b = max(one,two);
		if(check==-1) {
			check = b;
		} else {
			if(b<=check) check=b;
			else {
				if(a<=check) {
					check=a;
				} else {
					valid = false;
					break;
				}
			}
		}
	}
	if(valid) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
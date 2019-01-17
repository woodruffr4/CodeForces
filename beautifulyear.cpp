// Accepted
// 271A - Beautiful Year

#include <iostream>
#include <string>
using namespace std;

bool valid(int year);

int main(int argc, char const *argv[])
{
	int year;
	cin >> year;
	year++;
	while(!valid(year)) {
		year++;
	}
	cout << year << endl;
	return 0;
}

bool valid(int year) {
	string y = to_string(year);
	if(y.at(0)!=y.at(1) && y.at(0)!=y.at(2) && 
		y.at(0)!=y.at(3) && y.at(1)!=y.at(2) && 
		y.at(1)!=y.at(3) && y.at(2)!=y.at(3)) return true;
		return false;
}
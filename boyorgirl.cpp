// Accepted
// 236A - Boy or Girl

#include <iostream>
using namespace std;

int main()
{
	int arr[26] = {0};
	string line;
	getline(cin,line);
	int counter = 0;
	for (int i = 0; i < line.size(); ++i) {

		if(arr[line.at(i)-97]==0) {
			counter++;
			arr[line.at(i)-97]=1;
		}		

	}
	if(counter%2==0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}
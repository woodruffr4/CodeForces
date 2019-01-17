// Accepted
// 59A - Word

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char line[100];
	cin >> line;
	int lower = 0;
	int upper = 0;

	for (int i = 0; i < 100; ++i)
	{
		if(line[i]=='\0') break;
		if(islower(line[i])) lower++;
		else upper++;
	}
	if(lower>=upper) {
		for (int i = 0; i < 100; ++i)
		{
			if(line[i]=='\0') break;
			cout << (char) tolower(line[i]);
		}
		cout << endl;
	}
	else {
		for (int i = 0; i < 100; ++i)
		{
			if(line[i]=='\0') break;
			cout << (char) toupper(line[i]);
		}
		cout << endl;
	}
	return 0;
}
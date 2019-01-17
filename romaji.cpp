// Accepted
// 1008A - Romaji

#include <iostream>
using namespace std;

bool isVowel(char c);

int main()
{
	char line[100];
	cin >> line;
	bool valid = true;
	for (int i = 0; i < sizeof(line)/sizeof(char); ++i)
	{
		if(line[i]=='n') continue;
		if(line[i]=='\0') break;
		try {
			if(!isVowel(line[i])) {
				if(!isVowel(line[i+1]) || line[i+1]=='\0') {
					valid = false;
					break;
				}
			}
		} catch(...){}
	}
	if(valid) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}

bool isVowel(char c) {
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
	return false;
}
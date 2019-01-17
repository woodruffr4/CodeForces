// Accepted
// 266A - Stones on the Table

#include <iostream>
#include <string>
using namespace std;

// int func(string seq,int start);
// bool valid(string seq);

// int main(int argc, char const *argv[])
// {
// 	string line;
// 	int length;
// 	cin >> length;
// 	cin >> line;
// 	cout << func(line,1) << endl;
// 	return 0;
// }

// int func(string seq,int start) {
// 	//cout << seq << start << endl;
// 	if(valid(seq)) return 0;
// 	for (int i = start; i < seq.size(); ++i)
// 	{
// 		if(seq.at(i)==seq.at(i-1)) {
// 			if(i==seq.size()-1) {
// 				// cout << i << seq << endl;
// 				// cout << seq.substr(0,i-1) << endl;
// 				// cout << seq.substr(i) << endl;
// 				// cout << seq.substr(0,i) << endl;
// 				return 1+min(func(seq.substr(0,i-1)+seq.substr(i),i),
// 					func(seq.substr(0,i),i-1));
// 			} else {
// 				//cout << i<<seq<< endl;
// 				return 1+min(func(seq.substr(0,i-1)+seq.substr(i),i),
// 					func(seq.substr(0,i)+seq.substr(i+1),i));
// 			}
			
// 		}
// 	}
// }

// bool valid(string seq) {
// 	//cout << seq<< "b" << endl;
// 	if(seq.size()==1) {
// 		//cout << "final " << seq << endl;
// 		return true;
// 	}
// 	//cout << seq << "ok" << endl;
// 	for (int i = 0; i < seq.size()-1; ++i)
// 	{
// 		if(seq.at(i)==seq.at(i+1)) {
// 			return false;
// 		}
// 	}
// 	return true;
// }

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	string line;
	cin >> line;
	int r1 = 0;
	for (int i = 0; i < line.size(); i+=2)
	{
		try {
			if(line.at(i)==line.at(i-1)) r1++;
		} catch(...){}
		try {
			if(line.at(i)==line.at(i+1)) r1++;
		} catch(...){}
	}
	int r2=0;
	for (int i = 1; i < line.size(); i+=2)
	{
		try {
			if(line.at(i)==line.at(i-1)) r2++;
		} catch(...){}
		try {
			if(line.at(i)==line.at(i+1)) r2++;
		} catch(...){}
	}
	cout << min(r1,r2) << endl;
	return 0;
}

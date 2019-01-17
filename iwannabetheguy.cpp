// Accepted
// 469A - I Wanna Be the Guy

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int arr[n+1];
	for (int i = 0; i <= n; ++i) {arr[i]=0;}
	for (int i = 0; i < 2; ++i)
	{
		int num;
		cin >> num;
		for (int j = 0; j < num; ++j)
		{
			int val;
			cin >> val;
			arr[val]++;
		}
	}
	bool valid = true;
	for(int i=1;i<=n;i++) {
		if(arr[i]==0) {
			valid = false;
		}
	}
	if(valid) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;
	return 0;
}
// Accepted
// 318A - Even Odds

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long long n, k;
	cin >> n >> k;

	if(n%2==0) {
		long long mid = n/2;
		if(k>mid) {
			cout << n-((n-k)*2) << endl;
		} else {
			cout << 2*k-1 << endl;
		}
	} else {
		long long mid = (n/2)+1;
		if(k<=mid) {
			cout << 2*k-1 << endl;
		} else {
			cout << (n-1)-((n-k)*2) << endl;
		}
	}
	return 0;
}
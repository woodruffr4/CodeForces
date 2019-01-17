// Accepted
// 363B - Fence

#include <iostream>
using namespace std;

int main()
{
	int pieces, size;
	cin >> pieces >> size;
	int arr[pieces];
	int curSum = 0;
	int firstOfSet = -1;
	int curi = 1;
	for (int i = 0; i < pieces; ++i)
	{
		cin >> arr[i];
		if(i<size) {
			if(i==0)
				firstOfSet=arr[i];
			curSum+=arr[i];
		}
	}
	int min = curSum;
	for (int i = 1; i <= pieces-size; ++i)
	{
		curSum = curSum-firstOfSet+arr[i+size-1];
		if(min>curSum) {
			min = curSum;
			curi=i+1;
		}
		firstOfSet=arr[i];
	}
	cout << curi << endl;
	return 0;
}
// Accepted
// 617A - Elephant

#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int countSteps = 0;
	int steps[] = {1,2,3,4,5};
	for (int i = 4; i >= 0; --i)
	{
		if(num==0) break;
		while(num-steps[i]>=0) {
			num-=steps[i];
			countSteps++;
		}
	}
	cout << countSteps << endl;
	return 0;
}
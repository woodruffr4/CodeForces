// Accepted
// 546A - Soldier and Bananas

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int cost;
	int has;
	long long num;
	cin >>cost>>has>>num;
	long long res=0;
	for (int i = 1; i <= num; ++i)
	{
		res+=i;
	}
	res*=cost;
	res-=has;
	if(res<0) res=0;
	cout << res << endl;
	return 0;
}
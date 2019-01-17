// Accepted
// 158B - Taxi

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin >> num;
	int one=0;
	int two=0;
	int three=0;
	int four=0;
	int cur=0;
	int res=0;
	for (int i = 0; i < num; ++i)
	{
		cin >> cur;
		if(cur==1) {
			one+=1;
		}
		else if(cur==2) {
			two+=1;
		} 
		else if(cur==3) {
			three+=1;
		}
		else {
			four+=1;
		}
	}
	res+=four;
	four=0;
	int mi = min(three, one);
	res+=mi;
	if(mi==three) {
		one-=mi;
		three=0;
		if(one>=4) {
			res+=(one/4);
			one%=4;
		}
	} else {
		three-=mi;
		one=0;
		res+=three;
		three=0;
	}
	res+=(two/2);
	two%=2;
	if(two==1 && (one==2 || one==1)) {
		res++;
		two=0;
		one=0;
	}
	if(one!=0) res++;
	if(two!=0) res++;
	if(three!=0) res++;
	if(four!=0) res++;
	cout << res << endl;
	return 0;
}
// Accepted
// 148A - Insomnia Cure

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	vector<bool> v (d,false);
	for (int i = k-1; i < d; i+=k)
	{
		v.at(i)=true;
	}
	for (int i = l-1; i < d; i+=l)
	{
		v.at(i)=true;
	}
	for (int i = m-1; i < d; i+=m)
	{
		v.at(i)=true;
	}
	for (int i = n-1; i < d; i+=n)
	{
		v.at(i)=true;
	}
	int res=0;
	for (int i = 0; i < d; ++i)
	{
		if(v.at(i)) res++;
	}
	cout << res << endl;
	return 0;
}
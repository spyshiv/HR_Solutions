#include<iostream>
using namespace std;

long long add(long long n, int t)
{
	return (t + (n - 1) / t * t) *((n - 1) / t) / 2;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		cout << add(n, 3) + add(n, 5) - add(n, 15) << endl;
	}
	return 0;
}
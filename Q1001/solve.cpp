#include<iostream>
using namespace std;

int callatz(int n);
int main()
{
	int n;
	cin >> n;
	cout << callatz(n);
	return 0;
}

int callatz(int n)
{
	int counter = 0;
	while(n != 1)
	{
		if(n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = (3 * n + 1) / 2;
		}
		counter += 1;
	}
	return counter;
}

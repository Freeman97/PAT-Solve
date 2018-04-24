#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int h = 0;
	int t = 0;
	int s = 0;
	cin >> n;
	h = n / 100;
	t = (n - 100 * h) / 10;
	s = n - 100 * h - 10 * t;
	for(int i = 0; i < h; i++)
	{
		cout << "B";
	}
	for(int i = 0; i < t; i++)
	{
		cout << "S";
	}
	for(int i = 0; i < s; i++)
	{
		cout << i + 1;
	}
	return 0;
}

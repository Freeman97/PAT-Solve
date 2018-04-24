#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int N = 0;
	int counter = 0;
	int prev = 2;
	bool flag;
	cin >> N;
	for(int i = 2; i <= N; i++)
	{
		flag = true;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				flag = false;
				break;
			}
		}
		if(flag)
		{
			if(i - prev == 2)
			{
				counter++;
			}
			prev = i;
		}
	}
	cout << counter;
}

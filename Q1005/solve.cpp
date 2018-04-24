#include <iostream>
using namespace std;

int callatz(int n);
bool find(int n, int route[]);
int sort(int a[]);

int main()
{
	int num = 0;
	int k[100];
	int coverer[100];
	int keynum[100] = {0};
	for(int i = 0; i < 100; i++)
	{
		coverer[i] = 1;
	}
	int route[100][200] = {0};
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		cin >> k[i];
	}
	for(int i = 0; i < num; i++)
	{
		int n = k[i];
		int counter = 1;
		route[i][0] = n;
		for(;;)
		{
			n = callatz(n);
			route[i][counter] = n;
			counter++;
			if(n == 1)
			{
				break;
			}
		}
	}
	for(int i = 0; i < num; i++)
	{
		for(int j = 0; j < num; j++)
		{
			if(route[i][0] == route[j][0])
			{
				continue;
			}
			else if(find(route[i][0], route[j]))
			{
				coverer[i] = 0;
			}
		}
	}	
	for(int i = 0; i < num; i++)
	{
		if(coverer[i] == 1)
		{
			keynum[i] = k[i];
		}
	}
	sort(keynum);
	cout << keynum[0];
	for(int i = 1; i < 100; i++)
	{
		if(keynum[i])
		{
			cout << " " << keynum[i];
		}
	}
}

int callatz(int n)
{
	if(n % 2 == 0)
	{
		n = n / 2;
	}
	else if(n == 1)
	{
		return 1;
	}
	else
	{
		n = (3 * n + 1) / 2;
	}
	return n;
}

bool find(int n, int a[])
{
	for(int i = 0; i < 200; i++)
	{
		if(n == a[i])
		{
			return true;
		}
	}
	return false;
}

int sort(int a[])
{
	int temp = 0;
	for(int i = 0; i < 100; i++)
	{
		for(int j = i; j <100; j++)
		{
			if(a[j] > a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}


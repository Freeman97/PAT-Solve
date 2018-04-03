#include<iostream>
#include<string>
using namespace std;

void process(string a);

int main()
{
	string strInput[10];
	int strNum = 0;
	cin >> strNum;
	for(int i = 0; i < strNum; i++)
	{
		cin >> strInput[i];
	}
	for(int i = 0; i < strNum; i++)
	{
		process(strInput[i]);
	}
	return 0;	
}

void process(string a)
{
	int a1 = 0;
	int bA = 0;
	int ca = 0;
	int i = 0;
	while(a[i] != 'P')
	{
		if(a[i] != 'A')
		{
			cout << "NO" << endl;
			return;
		}
		i++;
		a1++;
	}
	i = i + 1;
	while(a[i] != 'T')
	{
		if(a[i] != 'A')
		{
			cout << "NO" << endl;
			return;
		}
		i++;
		bA++;
	}
	i = i + 1;
	while(i < a.length())
	{
		if(a[i] != 'A')
		{
			cout << "NO" << endl;
			return;
		}
		i++;
		ca++;
	}
	if((ca - a1) == ((bA - 1) * a1) && (bA - 1) >= 0)
	{
		cout << "YES" << endl;
		return;
	}
	else
	{
		cout << "NO" << endl;
		return;
	}
}

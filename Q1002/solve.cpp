#include<iostream>
#include<string>
using namespace std;

void output(int sum);
int main()
{	
	int sum;
	string a;
	getline(cin, a);
	int i = 0;
	while(a[i] != '\0')
	{
		if(a[i] == '1')
		{
			sum = sum + 1;
		}
		else if(a[i] == '2')
		{
			sum = sum + 2;
		}
		else if(a[i] == '3')
		{
			sum = sum + 3;
		}
		else if(a[i] == '4')
		{
			sum = sum + 4;
		}
		else if(a[i] == '5')
		{
			sum = sum + 5;
		}
		else if(a[i] == '6')
		{
			sum = sum + 6;
		}
		else if(a[i] == '7')
		{
			sum = sum + 7;
		}
		else if(a[i] == '8')
		{
			sum = sum + 8;
		}
		else if(a[i] == '9')
		{
			sum = sum + 9;
		}
		else if(a[i] == '0')
		{
			sum = sum + 0;
		}
		i++;
	}
	output(sum);
}

void output(int sum)
{
	int firstflag = 0;
	int b = 0;
	if(sum / 10 != 0)
	{
		b = sum % 10;
		sum = sum / 10;
		output(sum);
	}
	else
	{
		firstflag = 1;
		b = sum;
	}
	if(!firstflag)
	{
		cout << " ";
	}
	switch(b)
	{
		case 1:
		{
			cout << "yi";
			break;
		}
		case 2:
		{
			cout << "er";
			break;
		}
		case 3:
		{
			cout << "san";
			break;
		}
		case 4:
		{
			cout << "si";
			break;		
		}
		case 5:
		{
			cout << "wu";
			break;		
		}
		case 6:
		{
			cout << "liu";
			break;
		}
		case 7:
		{
			cout << "qi";
			break;
		}
		case 8:
		{
			cout << "ba";
			break;
		}
		case 9:
		{
			cout << "jiu";
			break;
		}
		case 0:
		{
			cout << "ling";
			break;
		}
	}
}

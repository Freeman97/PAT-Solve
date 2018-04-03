#include<iostream>
#include<string>
using namespace std;

struct Student
{
	string name;
	string no;
	int score;
};

int main()
{
	int n;
	cin >> n;
	Student stuMax, stuMin, stu;
	stuMax.score = 0;
	stuMin.score = 100;
	for(int i = 0; i < n; i++)
	{
		cin >> stu.name;
		cin >> stu.no;
		cin >> stu.score;
		if(stu.score > stuMax.score)
		{
			stuMax.name = stu.name;
			stuMax.no = stu.no;
			stuMax.score = stu.score;
		}
		if(stu.score < stuMin.score)
		{
			stuMin.name = stu.name;
			stuMin.no = stu.no;
			stuMin.score = stu.score;
		}
	}
	cout << stuMax.name << " " << stuMax.no << endl;
	cout << stuMin.name << " " << stuMin.no << endl;
}

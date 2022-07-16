#include<iostream>
using namespace std;
int main()
{
	float sales;
	cout << "请输入学生成绩：" << endl;
	cin >> sales;
	if (sales <= 40)
	{
		cout << "别学了（白给）" << endl;
	}
	else
	{
		if (sales <= 60)
		{
			cout << "学了一点（完蛋）" << endl;
		}
		else
		{
			if (sales <= 80)
			{
				cout << "学了许多（及格）" << endl;
			}
			else
			{
				if (sales <= 90)
				{
					cout << "学了很多（良好）" << endl;
				}
				else
				{
					if (sales <= 99)
					{
						cout << "很好，非常好（优秀）" << endl;
					}
					else
					{
						cout << "下学期不用来学了（满分）" << endl;
					}
				}
			}
		}
	}
	return 0;
}
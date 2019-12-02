#include <iostream>
#include <string>
using namespace std;

int test(int a, int b)//求最大公约数
{
	int  temp;
	if (a == 0 || b == 0)
		return 0;

	if (a < b)//求最小值最大值，大的用a表示，小的用b表示
	{
		temp = a; 
		a = b; 
		b = temp;
	} 

	while (b != 0)            //用循环求最大公约数
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

void M_sum(int n, int sum)
{
	int cur = sum;//玩家总的能量值
	string p;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	for (int i = 0; i < n; i++)
	{
		int tmp = p[i];//怪物的能量值

		if (tmp > cur)
		{
			cur += test(cur, tmp);
		}
		else
		{
			cur += tmp;
		}
	}
	cout << cur << endl;
}

int main()
{
	int n, sum;
	while (cin >> n >> sum)
	{
		M_sum(n, sum);
	}

	system("pause");
	return 0;
}
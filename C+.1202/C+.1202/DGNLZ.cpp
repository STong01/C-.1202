#include <iostream>
#include <string>
using namespace std;

int test(int a, int b)//�����Լ��
{
	int  temp;
	if (a == 0 || b == 0)
		return 0;

	if (a < b)//����Сֵ���ֵ�������a��ʾ��С����b��ʾ
	{
		temp = a; 
		a = b; 
		b = temp;
	} 

	while (b != 0)            //��ѭ�������Լ��
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

void M_sum(int n, int sum)
{
	int cur = sum;//����ܵ�����ֵ
	string p;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}

	for (int i = 0; i < n; i++)
	{
		int tmp = p[i];//���������ֵ

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
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//����ַ����е�һ������һ�ε��ַ�
int main1()
{
	string s;

	while (cin >> s)
	{
		int i = 0;
		int len = s.size();//�ַ�������
		string p;
		for (i = 0; i < len; i++)//�����ַ���������ÿ���ַ����ֵĴ���
		{
			int sum = 0;
			for (int j = 0; j < len; j++)
			{
				if (s[i] == s[j])
				{
					sum += 1;
				}
			}
			p[i] = sum;
		}

		for (i = 0; i < len; i++)//����ַ�����һ�εĵ�һ���ַ�
		{
			if (p[i] == 1)
			{
				cout << s[i] << endl;
				break;
			}
			if (i == len - 1)
			{
				cout << -1 << endl;
			}
		}
	}
	system("pause");
	return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//输出字符串中第一个出现一次的字符
int main1()
{
	string s;

	while (cin >> s)
	{
		int i = 0;
		int len = s.size();//字符串长度
		string p;
		for (i = 0; i < len; i++)//遍历字符串，计算每个字符出现的次数
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

		for (i = 0; i < len; i++)//输出字符出现一次的第一个字符
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
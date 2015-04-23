#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	//练习3.2
	//string line;
	//while (getline(cin,line))
	//{
	//	cout << line << endl;
	//}

	//string word;
	//while (cin >> word)
	//{
	//	cout << word << endl;
	//}

	//练习3.4
	string str1, str2;
	cout << "请输入两个字符串： " << endl;
	cin >> str1 >> str2;
	//if (str1 == str2)
	//{
	//	cout << "两个字符串相等" << endl;
	//}
	//else
	//{
	//	if (str1 > str2)
	//	{
	//		cout << str1 << "比" << str2 << "大" << endl;
	//	} 
	//	else
	//	{
	//		cout << str2 << "比" << str1 << "大" << endl;
	//	}
	//}
		//cout << "两个字符串不相等" << endl;

	if (str1.size() == str2.size())
	{
		cout << "两个字符串长度相等" << endl;
	}
	else
	{
		if (str1.size() > str2.size())
		{
			cout << str1 << " is longer than " << str2 << endl;
		} 
		else
		{
			cout << str2 << " is longer than " << str2 << endl;
		}
	}

	system("pause");
	return 0;
}

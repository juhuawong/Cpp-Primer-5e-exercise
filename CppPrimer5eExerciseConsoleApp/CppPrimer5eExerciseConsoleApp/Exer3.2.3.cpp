#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	//练习3.6
	string str1("hello");
	//for (auto &c:str1)
	//{
	//	c = 'x';
	//}
	//cout << str1 << endl;

	//练习3.7
	//for (char &c : str1)
	//{
	//	c = 'x';
	//}
	//cout << str1 << endl;

	//练习3.8
	//string::size_type i = 0;
	//while (i < str1.size())
	//{
	//	str1[i] = 'x';
	//	i++;
	//}
	//cout << str1 << endl;

	//for (string::size_type i = 0; i < str1.size();i++)
	//{
	//	str1[i] = 'x';
	//}
	//cout << str1 << endl;

	//练习3.9
	//string s;//初始化为空串
	//cout << s[0] << endl;

	//练习3.10
	//string str2;
	//string str3 = "";
	////while (cin >> str2)
	////{
	////	cout << str2 << endl;
	////}
	//cout << "Please input a string:" << endl;
	//getline(cin, str2);
	//for (auto c:str2)
	//{
	//	if (!ispunct(c)/* && !isspace(c)*/)
	//	{
	//		str3 += c;
	//	}
	//}
	//cout << str3 << endl;

	//练习3.11
	//const string s = "Keep out!";
	////如果接下来不对c进行修改，这个定义是没问题的；若在接下来修改c中的内容就会有错误
	//for (auto &c:s)
	//{
	//	//c = 'x';
	//	cout << c << endl;
	//}

	system("pause");
	return 0;
}

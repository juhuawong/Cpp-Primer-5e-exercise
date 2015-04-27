#include <iostream>
#include <string>
#include <vector>

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

	//练习3.14
	//int cin_variabl;
	//vector<int> ivec;
	//while (cin >> cin_variabl)//从控制台读取数据，ctrl+z介绍
	//{
	//	ivec.push_back(cin_variabl);
	//}
	//cout << endl;
	//
	////输出vector中的数据
	//for (vector<int>::iterator iit = ivec.begin(); iit != ivec.end();iit++)
	//{
	//	cout << *(iit) << endl;
	//}

	//练习3.16
	//vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//vector<int>::size_type ist = ivec.size();
	//cout << "vector的长度为： " << ist << endl;
	//cout << "vector中的内容为：" << endl;
	////输出内容
	//for (vector<int>::size_type i = 0; i < ist;i++)
	//{
	//	cout << ivec[i] << " ";
	//}
	//cout << endl;//刷新缓冲区

	//练习3.17
	//string words;
	//vector<string> sVec;
	////读取单词
	//while (cin >> words)
	//{
	//	sVec.push_back(words);
	//}
	//
	////输出单词，8个一行
	//for (vector<string>::size_type sst = 0; sst != sVec.size();sst++)
	//{
	//	//把单词中的内容转换成大写字母
	//	for (auto &c : sVec[sst])
	//	{
	//		c = toupper(c);
	//	}
	//	cout << sVec[sst] << " ";
	//	if ((sst+1)%8 == 0)
	//	{
	//		cout << endl;
	//	}
	//}

	//练习3.19
	//int cin_variable;
	//vector<int> iVec;
	//cout << "请输入数字:(ctrl+z)结束" << endl;
	//while (cin >> cin_variable)
	//{
	//	iVec.push_back(cin_variable);
	//}
	////计算两个相邻元素之和
	//vector<int> iPlus;
	//for (vector<int>::size_type ist = 0; ist != iVec.size()-1;ist++)
	//{
	//	int plusTemp = iVec[ist] + iVec[ist + 1];
	//	iPlus.push_back(plusTemp);
	//}
	//cout << "两个相邻元素之和：" << endl;
	//for (vector<int>::size_type i = 0; i != iPlus.size();i++)
	//{
	//	cout << iPlus[i] << " ";
	//}
	//cout << endl;

	////首尾相加的结果
	//vector<int> plusFirstAndLast;
	//for (vector<int>::size_type i = 0; i != iVec.size()/2;i++)
	//{
	//	int plusTemp = iVec[i] + iVec[iVec.size() - 1 - i];
	//	plusFirstAndLast.push_back(plusTemp);
	//}
	//cout << "首尾元素之和：" << endl;
	//for (vector<int>::size_type i = 0; i != plusFirstAndLast.size(); i++)
	//{
	//	cout << plusFirstAndLast[i] << " ";
	//}
	//cout << endl;
	//
	//const unsigned buf_size = 1024;
	//int ia[buf_size];//数组的长度必须是常量表达式

	//练习3.31
	//int arry[10];
	//for (size_t i = 0; i < 10;i++)
	//{
	//	arry[i] = i;
	//	cout << arry[i] << " ";
	//}
	//cout << endl;

	//cout << "复制的数组为：" << endl;
	//int arry_copy[10];
	//for (size_t i = 0; i < 10;i++)
	//{
	//	arry_copy[i] = arry[i];
	//	cout << arry_copy[i] << " ";
	//}
	//cout << endl;

	//cout << "数组的vector为:" << endl;
	//vector<int> iVec(arry, arry + 10);
	//for (auto i:iVec)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;

	//练习3.33
	//unsigned scores[11] = {};
	//unsigned grade;
	//while (cin >> grade)
	//{
	//	if (grade <= 100)
	//	{
	//		++scores[grade / 10];
	//	}
	//}

	//for (auto i : scores)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;
	
	//练习3.35
	//cout << "赋值之前：" << endl;
	//int arr[10];
	//for (auto i : arr)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;
	//for (auto i = begin(arr); i != end(arr); i++)
	//{
	//	*i = 0;
	//}
	//cout << "赋值之后：" << endl;
	//for (auto i : arr)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;


	system("pause");
	return 0;
}

// test.cpp: 定义控制台应用程序的入口点。
//

/*
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int yams[3]; //创建一个3个元素的数组
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamcosts[3] = { 20, 30, 5 };
	cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs "
		<< yamcosts[1] << " cents per yam" << endl;
	int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
	total = total + yams[2] * yamcosts[2];
	cout << "The total yam expenst is " << total << " cents.\n";
	cout << "\nSize of yams array = " << sizeof yams << " bytes.\n";
	cout << "Size of one element + " << sizeof yams[0] << " bytes.\n";
	cout << int ('s') << endl;
	cin.get();
	return 0;
    return 0;
} */

/*
#include "stdafx.h"
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";
	cout << "Howdy! I'm " << name2 << "! What's your name?" << endl;
	cin.getline(name1, Size);
	cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: "
		<< name2 << endl;
	cout << name1;
	cin.get();
	cin.get();
	return 0;

} */


#include "stdafx.h"
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;
	cin.get();
	cin.get();
	return 0;
 }

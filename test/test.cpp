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


/*
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
 } */


/*
#include "stdafx.h"
#include <iostream>
#include <string>	
int main()
{
	using namespace std;
	string s1 = "Penguin";
	string s2, s3;
	cout << "You can assign one string object to another: s2 = s1\n";
	s2 = s1;
	cout << "s1: " << s1 << ", s2: " << s2 << endl;
	cout << "You can assign a C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2: " << s2 << endl;
	cout << "You can concatenate strings: s3 = s1 + s2\n";
	s3 = s1 + s2;
	cout << "s3: " << s3 << endl;
	cout << "You can append string.\n";
		s1 += s2;
		cout << "s1 += s2 yields s1 = " << s1 << endl;
		s2 += " for a day";
		cout << "s2 += \" for a day\" yields s2 =  " << s2 << endl;
		cin.get();
		cin.get();
		return 0;
} */

/*
#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

int main()
{
	using namespace std;
	char charr[20];
	string str;
	
	cout << "Length of string in charr before input: "
		<< strlen(charr) << endl;
	cout << "Length of string in str before input: "
		<< str.size() << endl;
	cout << "Enter a line of text:" << endl;
	cin.getline(charr, 20);
	cout << "You entered: " << charr << endl;
	cout << "Enter another line of text: " << endl;
	getline(cin, str);
	cout << "You entered: " << str << endl;
	cout << "Length of string in charr after input: "
		<< strlen(charr) << endl;
	cout << "Length of string in ste after input: "
		<< str.size() << endl;
	cin.get();
	cin.get();
	return 0;

} */


/*#include "stdafx.h"
#include <iostream>
struct inflatable  //定义一个inflatable结构
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	/*inflatable guest =
	{
		"Young dream",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"James Yang",
		3.12,
		32.99
	};

	cout << "Expand your guest with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $"
		<< guest.price + pal.price << "!\n"; */

	/*inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49			
	};
	inflatable choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;
	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl; */

	/*inflatable guests[2] =
	{
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}	
	};
	cout << "The guests " << guests[0].name << " and " << guests[1].name
		<< "\nhave a combined volum of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";
	cin.get();
	return 0;
} */


	/* address.cpp
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	cout << "cups calue = " << cups;
	cout << " and cups address = " << &cups << endl;
	cin.get();
	return 0;
} */


/* pointer.cpp
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;
	//两种方式输出值
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	
	//两种方式输出地址
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	//用指针改变值
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	cin.get();
	return 0;
} */


/* New.app
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int nights = 1001;
	int* pt = new int;
	*pt = 1001;

	cout << "night value = ";
	cout << nights << ": location " << &nights << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;
	double* pd = new double;
	*pd = 10000001.0;

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof pt;
	cout << ": size of *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof(pd);
	cout << ": size of *pd = " << sizeof(*pd) << endl;
	cin.get();
	return 0;
} */


/*arraynew.cpp
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << " and "
		<< "p3[1] is " << p3[1] << ".\n";
	cout << "p3[2] is " << p3[2] << ".\n";
	p3 = p3 - 1;
	delete[] p3;
	cin.get();
	return 0;
} */

/* addpntrs.cpp
#include "stdafx.h"
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1 };

	//两种获取数组地址的方法
	double* pw = wages;   //一个数组的名称 = 地址
	short* ps = &stacks[0]; //运用&和数组元素
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl << endl;

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;
		cout << sizeof(wages) << " = size of wages array\n";
		cout << sizeof(pw) << " = size of pw pointer\n";
	cin.get();
	return 0;
}

*/


/* ptrstr.cpp
#include "stdafx.h"
#include <iostream>
#include <cstring>

int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char * bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << endl;
	cout << "Enter a kind of animal: ";
	cin >> animal; 
	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy(): \n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	ps = new char[strlen(animal) + 1];
	strcpy_s(ps, strlen(animal) + 1, animal);
	cout << "After using strcpy(): \n";
	cout << animal << " at " << (int*)animal << endl;
	cout << ps << " at " << (int*)ps << endl;
	delete [] ps;
	cin.get();
	cin.get();
	return 0;

} */


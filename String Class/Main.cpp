#include <iostream>
#include"MyString.h"


using namespace std;

int main()
{
	char sub[] = "urt";
	MyString s = MyString("turtle");
	MyString other = MyString("append");
	cout <<"the length of the string is: " << s.Length() << endl;
	cout << "the character at the third index is" << s.Print() << endl;
	cout << s.Compare(other) << endl;
	std::cout << s.Append(other).SetCStyle() << std::endl;
	cout<<s.Return() << endl;
	cout <<"is the string uppercase" << s.ConvertUp() << endl;
	cout <<"is the string lowercase" << s.ConvertLow() << endl;
	system("pause");
}
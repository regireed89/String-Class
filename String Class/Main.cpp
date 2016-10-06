#include <iostream>
#include"MyString.h"


using namespace std;

int main()
{
	
	MyString s = MyString("turtle");
	MyString other = MyString("append");
	cout << "my two srtings are turtle and append" << endl;
	cout <<"the length of the first string is: " << s.Length() << endl;
	cout << s.Compare(other) << endl;
	std::cout <<"this is the strings being appended: " << s.Append(other).SetCStyle() << std::endl;
	cout<<"returning as a constant char" << s.Return() << endl;
	cout <<"is the string uppercase" << s.ConvertUp() << endl;
	cout <<"is the string lowercase" << s.ConvertLow() << endl;
	system("pause");
}
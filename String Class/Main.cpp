#include <iostream>
#include"MyString.h"


using namespace std;

int main()
{
	MyString s = MyString("turtle");
	cout << s.Length() << endl;
	s.Print();
	cout << s.Compare() << endl;
	cout << s.Append() << endl;
	system("pause");
}
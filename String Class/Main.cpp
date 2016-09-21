#include <iostream>
#include"MyString.h"


using namespace std;

int main()
{
	MyString s = MyString("turtle");
	cout << s.Length() << endl;
	s.Print();
	cout << s.Compare() << endl;
	/*s.Append();*/
	s.ConvertUp();
	s.ConvertLow();
	s.FindSub();
	system("pause");
}
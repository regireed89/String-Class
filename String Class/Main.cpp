#include <iostream>
#include"MyString.h"


using namespace std;

int main()
{
	MyString s = MyString("turtle");
	MyString app = MyString("append");
	//cout << s.Length() << endl;
	//s.Print();
	//cout << s.Compare(MyString app) << endl;
	s.Append((MyString) app);
	//s.Prepend(MyString app);
	//s.Return();
	//s.ConvertUp();
	//s.ConvertLow();
	//s.FindSub();
	system("pause");
}
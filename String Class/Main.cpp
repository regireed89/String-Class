#include <iostream>
#include"MyString.h"


using namespace std;

int main()
{
	char sub[] = "urt";
	MyString s = MyString("turtle");
	MyString other = MyString("append");
	//cout << s.Length() << endl;
	//s.Print();
	//cout << s.Compare(other) << endl;
	//std::cout << s.Append(other).SetCStyle() << std::endl;
	//std::cout << s.Prepend(other).SetCStyle() << std::endl;
	//s.Return();
	//s.ConvertUp();
	//s.ConvertLow();
	cout<<s.FindSub(sub);
	//cout << s.SubCI();
	system("pause");
}
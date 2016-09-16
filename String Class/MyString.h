#pragma once

class MyString
{	
public:
	MyString() {};
	MyString(char w[]);

	//return string length as an integer
	int Length();

	//access character at a acertain index
	void Print();

	//compare if one string is the same as another
	char Compare();

	//append one string to another
	char StrAppend();

	//prepend one string to another
	char StrPrepend();

	//return basic constant C-style string
	char StrReturn();

	//convert string top lowercase
	char StrConvertLow();

	//convert strin gto uppercase
	char StrConvertUp();

	//find sub string
	char StrSub();

	//find sub-string starting at a certain index
	char StrSubCI();

	//replace sub-string with another sub string
	char StrReplaceSub();

	//set string to an input C-style string
	char StrSetCstyle();

private:
	char m_string[255];
};

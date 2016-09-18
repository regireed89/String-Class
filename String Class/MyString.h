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
	char Append();

	//prepend one string to another
	char Prepend();

	//return basic constant C-style string
	char Return();

	//convert string top lowercase
	char ConvertLow();

	//convert strin gto uppercase
	char ConvertUp();

	//find sub string
	char Sub();

	//find sub-string starting at a certain index
	char SubCI();

	//replace sub-string with another sub string
	char ReplaceSub();

	//set string to an input C-style string
	char SetCStyle();

private:
	char m_string[255];
};

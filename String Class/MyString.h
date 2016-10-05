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
	bool Compare(MyString other);

	//append one string to another
	MyString Append(MyString other);

	//prepend one string to another
	MyString Prepend(MyString other);

	//return basic constant C-style string
	const char* Return();

	//convert string top lowercase
	char ConvertLow();

	//convert strin gto uppercase
	char ConvertUp();

	//set string to an input C-style string
	const char * SetCStyle();

	//find sub string
	bool FindSub(char sub[]);

	//find sub-string starting at a certain index
	char SubCI();

	//replace sub-string with another sub string
	char ReplaceSub();


private:
	char m_string[255];
};

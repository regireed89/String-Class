#include <iostream>
#include"MyString.h"

using namespace std;

MyString::MyString(char newString[])
{
	int i;
	for (i = 0; newString[i] != '\0'; i++)
	{
		m_string[i] = newString[i];
	}
	m_string[i] = '\0';
}

int MyString::Length()
{
	// function finds the length of character array
	// loops through array until it reaches an exit point then returns how many indexs it went through	
	int i;
	for (i = 0; m_string[i] != '\0'; i++)
	{

	}

	return i;
}

void MyString::Print()
{
	// find a charcter at a specific index of a character array
	// 
	for (int i = 0; i < Length(); i++)
	{
		cout << m_string[i] << endl;
	}


}

char MyString::Compare()
{
	char Comp[7] = "turyle";
	int i;
	for (i = 0; i < Length(); i++)
	{
		for (i = 0; i != Comp[i] && m_string[i]; i++)
		{
			if (Comp[i] == m_string[i])
			{
				return true;
			}
			else
			{
				cout << i;
				return false;
			}
		}
	}
	return i;
}

int MyString::Append()
{
	char App[5] = "poop";
	char c[12];
	int i, j, x;

	for (i = 0; m_string[i] != Length(); ++i)
	{
		
	}
	for (j = 0; App[j] = Length(); ++j)
	{
		
	}
	for (x = 0; x != Length(); x++)
	{
		c[x] = m_string[i] + App[j];
	}
	cout << c[x];
//dont know how to put strings together!!!!!!!!		
	
		return 0;
	system("pause");

}

char MyString::Prepend()
{
	return 0;
}

char MyString::Return()
{
	return 0;
}

char MyString::ConvertLow()
{
	return 0;
}


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
				cout << i << endl;
			}
			else
			{
				return false;
			}
		}
	}
	return i;
}

char MyString::Append()
{

	char App[5] = "poop";
	char Connect;
	for (int i = 0; i < Length(); i++)
	{
		Connect = App[i] + m_string[i];
		cout << Connect << endl;
	}


	return Connect;
}


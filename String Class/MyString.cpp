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
	for ( i = 0; m_string[i] != '\0'; i++)
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
	char Comp[7] =  "turtle";
	int i;
	for (i = 0; i < Length(); i++)
	{
		if (Comp[i] == m_string[i])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

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
		cout << m_string[i] << endl;// prints out character associated with that index
	}


}

char MyString::Compare()
{
	char Comp[7] = "turyle";
	int i;
	for (i = 0; i < Length(); i++)
	{
		for (i = 0; i != Comp[i] && m_string[i]; i++)//loops until the character are not the same
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
	//no clue what a constant c-style is
	return 0;
}

char MyString::ConvertLow()
{
	int i;
	for (i = 0; i < Length(); i++)
	{
		if (m_string[i] > 64 && m_string[i] < 91)//if characters on ASCII table are 64-91 add 32 then return the character
		{
			(char)m_string[i] = (int)m_string[i] + 32;//adding 32 to the decimal associated with the characters in the array 
		}
	}
	return m_string[i];
}

char MyString::ConvertUp()
{
	int i;
	for (i = 0; i < Length(); i++)
	{
		if (m_string[i] > 96 && m_string[i] < 123)
		{
			(char)m_string[i] = (int)m_string[i] - 32;
		}
	}
	return m_string[i];
}

char MyString::FindSub()
{
	int x;
	for (char i = 0; m_string[i] < Length(); i++)
	{
		cin >> x;
		if (x == m_string[i])
		{
			cout << m_string[i, x] << endl;
			return true;
		}
		else
		{
			return false;
		}
	}
	return 0;
}

char MyString::SubCI()
{
	return 0;
}

char MyString::ReplaceSub()
{
	return 0;
}

char MyString::SetCStyle()
{
	return 0;
}

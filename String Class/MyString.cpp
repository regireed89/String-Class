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

char MyString::Print()
{
	// find a charcter at a specific index of a character array
	// 
	int i;
	for (i = 0; i < Length(); i++)
	{
		cout << m_string[3] << endl; // prints out character associated with that index
	
	}

	return m_string[i];
}

bool MyString::Compare(MyString other)
{
	int i;

	for (i = 0; i != other.Length() && Length(); i++)
	{
		if (other.m_string[i] == m_string[i])
		{
			cout << "strings are the same";
			return true;
		}
		else
		{
			cout << "strings are not the same";
			return false;
		}
	}

}

MyString MyString::Append(MyString other)
{
	char carray[255];
	//if i have "hello" + "bob"
	//totalsize would be 5 + 3 + 1 for the '/0'
	int totalSize = this->Length() + other.Length() + 1;
	//since arrays start at 0 we subtract 1
	carray[totalSize - 1] = '\0';
	for (int i = 0; i < this->Length() + other.Length(); i++)
	{
		if (i < this->Length())
			carray[i] = m_string[i];
		else
			carray[i] = other.m_string[i - this->Length()];
	}

	MyString ms = MyString(carray);
	return ms;
}

MyString MyString::Prepend(MyString other)
{
	char carray[255];

	int totalSize = other.Length() + Length() + 1;

	carray[totalSize - 1] = '/0';

	for (int i = 0; i < other.Length() + Length(); i++)
	{
		if (i < other.Length())
			carray[i] = other.m_string[i];
		else
			carray[i] = m_string[i - other.Length()];
	}

	MyString ms = MyString(carray);
	return ms;
}

const char* MyString::Return()
{
	return m_string;
}

char MyString::ConvertLow()
{
	int i;
	for (i = 0; i < Length(); i++)
	{
		if (m_string[i] > 64 && m_string[i] < 91)//if characters on ASCII table are 64-91 add 32 then return the character
		{
			(char)m_string[i] = (int)m_string[i] + 32;//adding 32 to the decimal associated with the characters in the array 
			cout << m_string[i];
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
			cout << m_string[i];
		}
	}
	return m_string[i];

}

const char * MyString::SetCStyle()
{
	return m_string;
}

bool MyString::FindSub(char sub[])
{
	
	for (char i = 0; i < Length(); i++)
	{
		if (sub[i] == m_string[i])
		{
			cout << "true";
			return true;
		}
		if (sub[i] != m_string[i])
		{
			cout << "false";
			return false;
		}
	}
}

char MyString::SubCI()
{

	for (char i = 0; i < Length(); i++)
	{
		for (char x = m_string[i]; x < m_string[i]; x++)
		{
			if (x == i)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return 0;
}



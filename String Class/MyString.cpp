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
		cout << m_string[i] << endl; // prints out character associated with that index
	}


}

/*char MyString::Compare(MyString other)
{
	int i;

	for (i = 0; i < Length(); i++)
	{
		for (i = 0; i != other && m_string[i]; i++)
		{                                                   
			if (other == m_string[i])
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
}*/

char MyString::Append(MyString other)
{
	int i;
	for (i = Length(); i < other.Length() + Length(); i++)
	{

		 m_string[i];
	} 	

	return i;                        
		
}

char MyString::Prepend(MyString app)
{
	return 0;
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

char MyString::FindSub()
{
	
	char x;
	for (char i = 0; i < Length(); i++)
	{
		cin >> x;
			if (x == m_string[i])
			{
				cout << "true";
				return true;
			}
			if (x != m_string[i])
			{
				cout << "false";
				return false;
			}
	}
	return 0;
}

char MyString::SubCI()
{
	
	for (char i = 0; i < Length(); i++)
	{
		for (char x = m_string[i]; x < m_string[i]; x++)
		{
			
		}
	}
	return 0;
}


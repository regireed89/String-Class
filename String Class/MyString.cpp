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

//char MyString::Compare(MyString app)
//{
//	int i;
//	for (i = 0; i < Length(); i++)
//	{
//		for (i = 0; i != app.Length && m_string.Length; i++)//loops until the character are not the same
//		{
//			if (app == m_string)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//	}
//	return i;
//}

char MyString::Append(MyString app)
{
	char d[255];
	char c[255];
	int i, j;
	for (i = 0; i < Length(); i++)
	{
	    c[i] = m_string[i];
		cout << c[i];
	} 
	for (j = 0; j < app.Length(); j++)
	{
		d[j] = app.Length();
		cout << d[j];
	}
	/*char c[Length + app.Length];
	cout << c[Length() + app.Length()];*/
	return 0;                        

	system("pause");

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


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
#include <string.h>

using namespace std;

//const int n = 101;

class String
{
private:
	char* pstr;
	//string str;
public:
	String()
	{
		pstr = new char[100 + 1];
		pstr[0] = '\0';
	}

	String(const char* s)
	{
		pstr = new char[100 + 1];
		strcpy(pstr, s);
	}

	~String()
	{
		delete[] pstr;
		//cout << "Destructor done." << endl;
		//system("pause");
		system("break");
	}

	int length() const
	{
		return strlen(pstr);
	}

	bool operator == (const String& s)
	{
		return (strcmp(pstr, s.pstr)) ? true : false;
	}

	bool operator == (const char* ps)
	{
		return (strcmp(pstr, ps)) ? true : false;
	}


	void operator += (const char* ps)
	{
		strcat(pstr, ps);
	}
		//pstr += *ps;

	void operator += (const String& s)
	{
		strcat(pstr, s.pstr);
	}
		//String(pstr) += s;

	operator char* ()
	{
		return pstr;
	}

};

int main()
{
	String s1;
	s1 += "Hello";
	cout << s1 << endl;
	s1 += " there";
	cout << s1 << endl;
	cout << "Length = " << s1.length() << endl;

	cout << endl;

	String s2 = "Hello";
	cout << s2 << endl;
	s2 += String(" again");
	cout << s2 << endl;
	cout << "Length = " << s2.length() << endl;

	cout << (s1 == s2) << endl;
	cout << (s1 == "Hello there") << endl;

	system("pause");
	return 0;

	system("pause");
	return 0;
}
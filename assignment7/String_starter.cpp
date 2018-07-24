#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class String
{
private:
	char* pstr;
public:
	String()
	{
		this->pstr[101];
		//strcpy(pstr, '\0');
	}

	String(const char* s)
	{
		char pstr[101];
		strncpy(pstr, s, 101);
	}

	~String()
	{
		delete[] pstr;
	}

	int length() const
	{
		for (int i = 0; i < sizeof pstr; i++)
		{
			pstr[i] = 0;
		}
		return 0;
	}

	bool operator == (const String& s)
	{
		if (this == &s)
		{
			return true;
		}
		
		{
			return false;
		}
	}

	bool operator == (const char* ps)
	{
		if (pstr == ps) {
			return true;
		}
		for (int j = 0; j < sizeof pstr; j++)
		{
			if (pstr[j] != ps[j])

				return false;
		}
	}

	void operator += (const char* ps)			// concatenate
	{
		pstr += *ps;							// add the characters to the end of the existing characters by passing a char* as the arg
	}

	void operator += (const String& s)			// concatenate
	{
		String(pstr) += s;						// add the characters to the end of the existing characters by passing a String as the arg
	}

	operator char* ()							// conversion operator
	{
		return pstr;							// return a pointer to the characters
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
}
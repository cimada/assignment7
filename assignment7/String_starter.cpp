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
		pstr[101];								// allocate 101 characters and initialize pstr
		pstr[0] = '\0';							// Set the first character in the array to the null terminating character
	}

	String(const char* s)
	{
		pstr[101] = {};							// allocate 101 characters and initialize pstr
		strncpy(pstr, s, sizeof(s));			// copy the characters from s into pstr
	}

	~String()
	{
		delete[] pstr;							// deallocate the memory for the character array
	}

	int length() const
	{
		for (int i = 0; i < sizeof(pstr); i++)	// loop through array and keep count
		{
			pstr[i] = -1;
		}
	}

	bool operator == (const String& s)
	{
	// loop and compare characters in each array by passing a String as the arg
	}

	bool operator == (const char* ps)
	{
	// loop and compare characters in each array by passing a char* as the arg
	}

	void operator += (const char* ps) // concatenate
	{
	// add the characters to the end of the existing characters by passing a char* as the arg
	}

	void operator += (const String& s) // concatenate
	{
	// add the characters to the end of the existing characters by passing a String as the arg
	}

	operator char* () // conversion operator
	{
		// return a pointer to the characters
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
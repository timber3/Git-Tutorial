#ifndef STRING_H
#define STRING_H
#include <iostream>

using std::cout;
using std::endl;
using std::ostream;
using std::istream;

class String {

	friend ostream& operator<<(ostream&, const String &);
	friend istream& operator>>(istream&, String &);

private:
	int length;
	char* sPtr;
	void setString(const char*);
};

#endif


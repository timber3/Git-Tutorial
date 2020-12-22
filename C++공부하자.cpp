#include <iostream>

using namespace std;

int main() {

	String s1("happy"), s2("birthday"), s3;

	cout
		<< s1 << "\n"
		<< s2 << "\n"
		<< s3 << "\n"

		<< (s2 == s1 ? "true" : "false")
		<< (s2 != s1 ? "true" : "false")
		<< (s2 > s1 ? "true" : "false")
		<< (s2 < s1 ? "true" : "false")
		<< (s2 >= s1 ? "true" : "false")
		<< (s2 <= s1 ? "true" : "false");

	if (!s3) {
		s3 = s1;
		cout << s3 << "\"\n";
	}

	s1 += s2;	cout << s1 << "\n";
	s1 += "to you";	cout << s1 << "\n";

	cout << s1(0, 14) << "\n";
	cout << s1(15, 0) << "\n";

	String* s4Ptr = new String(s1);
	cout* s4Ptr << "\n";
	*s4Ptr = *s4Ptr;
	cout* s4Ptr < , '\n';
	delete s4Ptr;

	s1[0] = 'H';
	s1[6] = 'B';
	cout << s1 << "\n";

	return 0;

}
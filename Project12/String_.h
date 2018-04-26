#pragma once
#include <iostream>
using namespace std;
class String_
{
	char *str;
	int length;
public:
	String_(const String_ &obj);
	String_();
	String_(const char*str);
	~String_();
	const char* data() const;
	void setStr(const char * str);
	void operator+=(const String_&obj);
	String_& operator=(const String_&obj) {
		if (this == &obj)
			return *this;
		if (this->str != nullptr)
			delete[]this->str;

		this->length = 0;
		this->str = nullptr;
	}
	String_ substr_(int ot, int kol) const;
};

ostream& operator<<(ostream&out, const String_&obj);
istream& operator >> (istream&in, String_&obj);
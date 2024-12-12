#pragma once
#include <string>
using namespace std;
class Exception
{
public:

	int code;
	std::string name;
	Exception(int c, const std::string& n) : code(c), name(n) {};
};


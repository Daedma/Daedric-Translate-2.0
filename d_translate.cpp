#include "declaration.h"
#include <algorithm>

const std::string symbols("<>,./?;:|[]{}()-_=+!@#$%^&*1234567890`~¹");

const std::string d_translate(const std::string& str)
{
	using namespace std;
	string ed_str;
	for (const auto& i : str)
	{
		if (alphabet.count(i))
			ed_str += alphabet.at(i);
		else if (symbols.find(i) != string::npos)
			ed_str += symbols[symbols.find(i)];
		else
			ed_str += ' ';
	}
	return ed_str;
}
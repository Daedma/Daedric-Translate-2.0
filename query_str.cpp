#include "declaration.h"
#include <Windows.h>

const std::string query_str(std::istream& is)
{
	using namespace std;
	string str;
	cout << "Please, enter string:\n" << endl;
	getline(is, str);
	if (str == "qqq")
	{
		cout << "\nBye!" << endl;
		Sleep(2000);
		exit(EXIT_SUCCESS);
	}
	return str;
}

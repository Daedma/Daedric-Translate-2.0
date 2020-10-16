#define _CRT_SECURE_NO_WARNINGS
#include "declaration.h"

void translate_with_buf(std::istream& is)
{
	using namespace std;
	string str = d_translate(query_str(is));
	cout << '\n' << str << '\n' << endl;
	if (OpenClipboard(0))
	{
		EmptyClipboard();
		char* clip_data = static_cast<char*>(GlobalAlloc(GMEM_FIXED, MAX_PATH));
		try {
			lstrcpy(clip_data, str.c_str());
			SetClipboardData(CF_TEXT, static_cast<HANDLE>(clip_data));
			LCID* lcid = static_cast<DWORD*>(GlobalAlloc(GMEM_FIXED, sizeof(DWORD)));
			*lcid = MAKELCID(MAKELANGID(LANG_RUSSIAN, SUBLANG_NEUTRAL), SORT_DEFAULT);
			SetClipboardData(CF_LOCALE, static_cast<HANDLE>(lcid));
			cout << "Text copied!" << '\n' << endl;
		}
		catch (...)
		{
			cout << '\a' << "Text not copied!" << '\n' << endl;
		}
		CloseClipboard();
	}
	else
		cout << '\a' << "Text not copied" << '\n' << endl;
	
}
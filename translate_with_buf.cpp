#define _CRT_SECURE_NO_WARNINGS
#include "declaration.h"

void void translate_with_buf(const std::string&)
{
	if (OpenClipboard(NULL))//��������� ����� ������
	{
		HGLOBAL hgBuffer;
		char* chBuffer;
		EmptyClipboard(); //������� �����
		hgBuffer = GlobalAlloc(GMEM_DDESHARE, str.max_size() + 1);//�������� ������
		chBuffer = static_cast<char*>(GlobalLock(hgBuffer)); //��������� ������
		strcpy(chBuffer, LPCSTR(str.c_str()));
		GlobalUnlock(hgBuffer);//������������ ������
		SetClipboardData(CF_TEXT, hgBuffer);//�������� ����� � ����� ������
		CloseClipboard(); //��������� ����� ������
	}
}
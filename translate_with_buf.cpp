#define _CRT_SECURE_NO_WARNINGS
#include "declaration.h"

void void translate_with_buf(const std::string&)
{
	if (OpenClipboard(NULL))//открываем буфер обмена
	{
		HGLOBAL hgBuffer;
		char* chBuffer;
		EmptyClipboard(); //очищаем буфер
		hgBuffer = GlobalAlloc(GMEM_DDESHARE, str.max_size() + 1);//выделяем память
		chBuffer = static_cast<char*>(GlobalLock(hgBuffer)); //блокируем память
		strcpy(chBuffer, LPCSTR(str.c_str()));
		GlobalUnlock(hgBuffer);//разблокируем память
		SetClipboardData(CF_TEXT, hgBuffer);//помещаем текст в буфер обмена
		CloseClipboard(); //закрываем буфер обмена
	}
}
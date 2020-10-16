#pragma once
#include <string>
#include <iostream>
#include <map>
#include <Windows.h>

const std::map<const char, const std::string> alphabet = {						
	{'A',"Ayem"}, {'a',"ayem"}, {'B',"Bedt"}, {'b',"bedt"}, {'C',"Cess"},
	{'c',"cess"}, {'D',"Doht"}, {'d',"doht"}, {'E',"Ekem"}, {'e', "ekem"},
	{'F',"Hefned"}, {'f',"hefned"}, {'G',"Geth"}, {'g',"geth"}, {'H', "Hekem"},
	{'h',"hekem"}, {'I',"Iya"}, {'i', "iya"}, {'J',"Jeb"}, {'j',"jeb"},
	{'K',"Koht"}, {'k',"koht"}, {'L',"Lyr"}, {'l',"lyr"}, {'M',"Meht"},
	{'m',"meht"}, {'N',"Neht"}, {'n',"neht"}, {'O',"Oht"}, {'o',"oht"},
	{'P',"Payem"}, {'p', "payem"}, {'Q',"Quam"}, {'q',"quam"}, {'R', "Roht"},
	{'r', "roht"}, {'S', "Seht"}, {'s', "seht"}, {'T', "Tayem"}, {'t',"tayem"},
	{'U',"Yoodt"}, {'u', "yoodt"}, {'V', "Venk"}, {'v',"venk"}, {'W',"Web"},
	{'w',"web"}, {'X', "Xayah"}, {'x',"xayah"}, {'Y',"yahkem"}, {'y',"yahkem"},
	{'Z', "Zyr"}, {'z', "zyr"}
};

const std::string d_translate(const std::string&);//функция изменения строки

const std::string query_str(std::istream&);//функция запроса

void translate_with_buf(std::istream&);//функция для помещения строки в буффер обмена
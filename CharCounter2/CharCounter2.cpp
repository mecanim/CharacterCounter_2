// CharCounter2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	using namespace std;
	system("chcp 1251>nul");

	string inpStr;
	string rusPrompt = "Введите строку: ";
	string engPrompt = "What is the input string? ";
	DWORD rusLangID = 1049;

	//prompt Russian or not depending on OS language
	cout << (GetSystemDefaultLangID() == rusLangID?rusPrompt:engPrompt) << endl;
	getline(cin, inpStr);

	if(GetSystemDefaultLangID() == rusLangID)
		cout << "В строке \"" << inpStr << + "\" " << inpStr.length() << " символов." << endl;
	else
		cout << '\"' << inpStr + "\" has a " << inpStr.length() << " characters." << endl;

	system("pause>nul");
    return 0;
}


// CharCounter2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	using namespace std;

	string inpStr;
	cout << "What is the input string? ";
	cin >> inpStr;
	cout << inpStr + " has a " << inpStr.length() << " characters." << endl;

	system("pause>nul");
    return 0;
}


// OOp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>

#include "clsstring.h"
#include "Date.h"
using namespace std;





int main()
{
	
	clsstring str;
	clsstring str2("mold");
	str.Value = "ali";
	cout << "Str1\t" << str.Value << endl;
	cout << "Str2\t" << str2.Value << endl;
	str2.Value = "lol is laughing";
	cout << "there is "<<str2.CountWords()<<"\n";

	cout << str2.IsVowel()<<"\n";
	
	Date time;
	
	 Date time2("11/12/2004");
	 time2.print();

	return 0;
}


#pragma once
#include <iostream>

#include <string>

#include <vector>
using namespace std;




class clsstring
{
private:
	string _value;
public:
	clsstring(string value)
	{
		_value = value;
	}
	clsstring()
	{
		_value = "";
	}
	void SetValue(string value)
	{
		_value = value;
	}
	string GetValue()
	{
		return _value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	static short CountWords(string S1) {
		string delim = " ";
		// delimiter
		short Counter = 0;
		short Space = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the  delimiters
		while ((Space = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, Space);
			// store the word
			if (sWord != "")
			{
				Counter++;
			} //erase() until positon and move to next word.
			S1.erase(0, Space + delim.length());
		} if (S1 != "") {
			Counter++;
			// it counts the last word of the string.
		}
		return Counter;
	}

	short CountWords()
	{
		return CountWords(_value);
	}
	static short CountCapital(string IsIt)
	{
		int Counter=0;
		for(int i=0;i<IsIt.size();i++)
		{
			if( isupper(IsIt[i]))
			{
				Counter++;
				
			}
			
		}
		cout << Counter<<"\n";
	}
	short CountCapital()
	{
		_value= CountCapital(_value);
	}
	
	short CounterVowels(string Vowel)
	{
		int count=0;
		string Vowels = "aiyoeu";
		int nStringV = Vowels.size();
		for (int i = 0;i < nStringV;i++)
		{
			int ValueVowel = Vowel.find(Vowels[i]);
			if (ValueVowel != -1)
			{
				count++;
			}
			
			
		}
		return count;
	}
	short CounterVowels()
	{
		return CounterVowels(_value);
	}
	string InvertAllLetters(string InvertLetters)
	{
		int nString = InvertLetters.size();
		for(int i=0;i<nString;i++)
		{
			if(InvertLetters[i] == tolower(InvertLetters[i]))
			{
				InvertLetters[i] = toupper(InvertLetters[i]);
			}
			else if(InvertLetters[i] == toupper(InvertLetters[i]))
			{
				InvertLetters[i] = tolower(InvertLetters[i]);
			}
		}
		return InvertLetters;
	}
	string InvertAllLetters()
	{
		return InvertAllLetters(_value);
	}
	static string UpperFirstLetterofEachWord(string letter)
	{
		bool isFirstUpper = true;
		for(int i=0;i<letter.size();i++)
		{
			
			if(letter[i]!=' '&&isFirstUpper)
			{
				letter[i] = toupper(letter[i]);
			}

			isFirstUpper = (letter[i] == ' ' ? true : false);
		}
		return letter;
	}
	 string UpperFirstLetterofEachWord()
	{
		 _value = UpperFirstLetterofEachWord(_value);
	}
	 static string LowerFirstLetterofEachWord(string letter)
	 {
		 bool isFirstUpper = true;
		 for (int i = 0;i < letter.size();i++)
		 {

			 if (letter[i] != ' ' && isFirstUpper)
			 {
				 letter[i] = tolower(letter[i]);
			 }

			 isFirstUpper = (letter[i] == ' ' ? true : false);
		 }
		 return letter;
	 }
	 string LowerFirstLetterofEachWord()
	 {
		 _value = LowerFirstLetterofEachWord(_value);
	 }

	static char InvertLetterCase(char char1)
	{
		return isupper(char1) ? tolower(char1) : toupper(char1);
		
	}
	static string  InvertAllLettersCase(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertLetterCase(S1[i]);
		}
		return S1;
	}void  InvertAllLettersCase()
	{
		_value = InvertAllLettersCase(_value);
	}
	
	string JoinString(string Join)
	{
		
	}
	string JoinString()
	{
		return JoinString(_value);
	}
	string IsVowel(string isVowel)
	{
		string Vowels = "aiyoeuAOIYUE";
		int nString_Vowel = isVowel.size();
		int ValueVowel;
		for(int i=0;i<nString_Vowel;i++)
		{
		ValueVowel=	Vowels.find(isVowel[i]);
			if(ValueVowel!=-1)
			{
				break;
			}
			
		}
	
		if (ValueVowel != -1)
		{
			return "yes";
		}
		else return "no";
	}
	string IsVowel() { return IsVowel(_value); }
	static string LowerAllString(string LowerAll)
	{
		int nString_LowerAll = LowerAll.size();
		for (int i = 0;i < nString_LowerAll;i++)
		{
			LowerAll[i] = tolower(LowerAll[i]);
		}
		return LowerAll;
	}

	string LowerAllString()
	{
		return LowerAllString(_value);
	}
	static short Length(string LengthString)
	{
		return LengthString.size();
		
	}
	short Length()
	{
		return Length(_value);
	}
	static string UpperAllCase(string S1)
	{
		for(int i=0;i<S1.size();i++)
		{
			S1[i] = toupper(S1[i]);
		}
		return S1;
	}
	void UpperAllCase()
	{
		_value = UpperAllCase(_value);
	}
	static string LowerAllCase(string S1)
	{
		for (int i = 0;i < S1.size();i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	
	}void LowerAllCase()
	{
		_value = LowerAllString(_value);
	}
	enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };
	static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
	{


		if (WhatToCount == enWhatToCount::All)
		{
			return S1.length();
		}

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
				Counter++;


			if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
				Counter++;


		}

		return Counter;

	}
	static string CountSmallLetters(string S1){
		for(int i=0;i<S1.size();i++)
		{
			S1[i] = tolower(S1[i]);
		}
		
	}

	string CountSmallLetters()
	{
		_value = CountSmallLetters(_value);
		
	}

	static short  CountSpecificLetter(string S1, char Letter, bool MatchCase = true)
	{

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (MatchCase)
			{
				if (S1[i] == Letter)
					Counter++;
			}
			else
			{
				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}

		}

		return Counter;
	}

	short  CountSpecificLetter(char Letter, bool MatchCase = true)
	{
		return CountSpecificLetter(_value, Letter, MatchCase);
	}

	static vector<string> Split(string S1, string Delim)
	{

		vector<string> vString;

		short pos = 0;
		string sWord; // define a string variable  

		// use find() function to get the position of the delimiters  
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word   
			if (sWord != "")
			{
				vString.push_back(sWord);
			}

			S1.erase(0, pos + Delim.length());  /* erase() until positon and move to next word. */
		}

		if (S1 != "")
		{
			vString.push_back(S1); // it adds last word of the string.
		}

		return vString;

	}

	vector<string> Split(string Delim)
	{
		return Split(_value, Delim);
	}

	static string TrimLeft(string S1)
	{


		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}

	void TrimLeft()
	{
		_value = TrimLeft(_value);
	}

	static string TrimRight(string S1)
	{


		for (short i = S1.length() - 1; i >= 0; i--)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1);
			}
		}
		return "";
	}

	void TrimRight()
	{
		_value = TrimRight(_value);
	}

	static string Trim(string S1)
	{
		return (TrimLeft(TrimRight(S1)));

	}

	void Trim()
	{
		_value = Trim(_value);
	}

	static string JoinString(vector<string> vString, string Delim)
	{

		string S1 = "";

		for (string& s : vString)
		{
			S1 = S1 + s + Delim;
		}

		return S1.substr(0, S1.length() - Delim.length());


	}

	static string JoinString(string arrString[], short Length, string Delim)
	{

		string S1 = "";

		for (short i = 0; i < Length; i++)
		{
			S1 = S1 + arrString[i] + Delim;
		}

		return S1.substr(0, S1.length() - Delim.length());

	}

	static string ReverseWordsInString(string S1)
	{

		vector<string> vString;
		string S2 = "";

		vString = Split(S1, " ");

		// declare iterator
		vector<string>::iterator iter = vString.end();

		while (iter != vString.begin())
		{

			--iter;

			S2 += *iter + " ";

		}

		S2 = S2.substr(0, S2.length() - 1); //remove last space.

		return S2;
	}

	void ReverseWordsInString()
	{
		_value = ReverseWordsInString(_value);
	}

	static string ReplaceWord(string S1, string StringToReplace, string sRepalceTo, bool MatchCase = true)
	{

		vector<string> vString = Split(S1, " ");

		for (string& s : vString)
		{

			if (MatchCase)
			{
				if (s == StringToReplace)
				{
					s = sRepalceTo;
				}

			}
			else
			{
				if (LowerAllString(s) == LowerAllString(StringToReplace))
				{
					s = sRepalceTo;
				}

			}

		}

		return JoinString(vString, " ");
	}

	string ReplaceWord(string StringToReplace, string sRepalceTo)
	{
		return ReplaceWord(_value, StringToReplace, sRepalceTo);
	}

	static string RemovePunctuations(string S1)
	{

		string S2 = "";

		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}

		return S2;

	}

	void RemovePunctuations()
	{
		_value = RemovePunctuations(_value);
	}




};

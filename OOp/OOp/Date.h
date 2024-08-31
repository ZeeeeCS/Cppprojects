#pragma once
#pragma warning(disable :4996)
#include <ctime>
#include <iostream>
#include "clsstring.h"
#include <bits/stdc++.h>
#include <string>

using namespace std;
 class Date
 {


 	
 private:
 	short _Year;
 	short _Month;
 	short _Day;
 public:
 	Date(){
 	time_t Time = time(0);
 	tm* period = localtime(&Time);
	_Year = period->tm_year + 1900;
	_Month= period->tm_mon + 1;
	_Day= period->tm_mday;
	}
 	Date(short year, short month, short day)
 	{
		_Year=year;
		_Month=month;
 		_Day=day;

 	}
    Date(string Date) {
 		vector <string> vDate;
 		vDate = clsstring::Split(Date, "/");
 		_Day = stoi(vDate[0]);
 		_Month = stoi(vDate[1]);
 		_Year = stoi(vDate[2]);

 	}
    void SetDay(short Day) {
        _Day = Day;
    }

    short GetDay() {
        return _Day;
    }
    __declspec(property(get = GetDay, put = SetDay)) short Day;
    
    void SetMonth(short Month) {
        _Month = Month;
    }

    short GetMonth() {
        return _Month;
    }
    __declspec(property(get = GetMonth, put = SetMonth)) short Month;


    void SetYear(short Year) {
        _Year = Year;
    }

    short GetYear() {
        return _Year;
    }
    __declspec(property(get = GetMonth, put = SetMonth)) short Year;

 void print(){
     
 cout<<_Day<<"/"<<_Month<<"/"<<_Year<<endl;
 
 }
    static string DatetoString(Date date)
 {
        return to_string(date.Day) + "/" + to_string(date.Month) + "/" + to_string(date.Year);
 }
    string DatetoString()
 {
       return DatetoString(*this);
 }
    void PrintCalender()
 	{
 		
 	}
    static	bool IsValidDate(Date date)
    {

        if (date.Day < 1 || date.Day>31)
            return false;

        if (date.Month < 1 || date.Month>12)
            return false;

        if (date.Month == 2)
        {
            if (isLeapYear(date.Year))
            {
                if (date.Day > 29)
                    return false;
            }
            else
            {
                if (date.Day > 28)
                    return false;
            }
        }
    }

    bool IsValidDate()
 {
        return IsValidDate(*this);
 }
   static bool isLeapYear(short Year)
 {
	 
       return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
		
 }
   bool isLeapYear()
 {
       return isLeapYear(_Year);
 }
    static bool NumberDaysofYear(short Year)
 {
        return isLeapYear(Year) ? 365 : 364;
 }
    bool NumberDaysofYear()

 };
 
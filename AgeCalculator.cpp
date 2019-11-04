#include <iostream>
using namespace std;

int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int birthdate[3];
int todaydate[3];

int isLeap(int year)
{
    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
        return 1;
    else
        return 0;
}

void getData()
{
    cout << "Enter your birth day, month, year respectively." << endl;
    cin >> birthdate[0] >> birthdate[1] >> birthdate[2];
    cout << "Enter current date in the same manner." << endl;
    cin >> todaydate[0] >> todaydate[1] >> todaydate[2];
}

int main()
{
    getData();
    int year = todaydate[2] - birthdate[2];
    int month = 0;

    if (todaydate[1] != 1 && birthdate[1] != 12)
        month = (todaydate[1] + 12 - birthdate[1]) % 12;

    if (todaydate[1] == 1 && birthdate[1] != 12)
        month = 12 - birthdate[1];
    if (birthdate[1] == 12 && todaydate[1] != 1)
        {
            month = todaydate[1];
            year --;
        }
    else
        month = 0;
    if (month < 0)
    {
        month = 11;
        year--;
    }
    int day = (::month[birthdate[1] - 1] - birthdate[0] + todaydate[0]) % (::month[birthdate[1] - 1]);
    if (birthdate[1] == 2 && isLeap(birthdate[2]))
        day += 1;
    cout << "Age: " << year << " years, " << month << " months and " << day << " days." << endl;
    int totalDays = 0; //substract the extra days that were added
}
//idea is to increase the birthdate day by day and count the leap years till the birthdate is not equal to the current date
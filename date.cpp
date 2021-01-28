#include <bits/stdc++.h>
using namespace std;
#define fo(a, j, n) for (long long int a = j; a < n; a++)
#define foe(a, j, n) for (long long int a = j; a <= n; a++)
#define ll long long int
#define pb push_back
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
bool ischeck(int day, int month)
{
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
        return true;
    return false;
}
bool isleap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;
}
int main()
{
    int day, month, year, to_day, to_month, to_year;
    cin >> day >> month >> year;
    to_month = month;
    to_year = year;
    if (day < 1 || day > 31 || month > 12 || month < 1)
    {
        cout << "ivalid date";
        exit(1);
    }
    if (ischeck(day, month))
    {
        cout << "ivalid month";
        exit(1);
    }
    if (month == 2)
    {
        if (isleap(year) && day > 29)
        {
            cout << "ivalid year with date";
            exit(1);
        }
        else if (!isleap(year) && day > 28)
        {
            cout << "ivalid year with date";
            exit(1);
        }
    }
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (day < 31)
        {
            to_day = day++;
        }
        else
        {
            to_day = 1;
            to_month = month++;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (day < 30)
        {
            to_day = ++day;
        }
        else
        {
            to_day = 1;
            to_month = ++month;
        }
        break;
    case 12:
        if (day < 31)
        {
            to_day = ++day;
        }
        else
        {
            to_day = 1;
            to_month = 1;
            to_year = ++year;
        }
        break;
    case 2:
        if (day < 28)
            to_day = ++day;
        else if (isleap(year) &&day == 28)
            to_day = ++day;
        else if (day == 28 || day == 29)
        {
            to_day = 1;
            to_month = 3;
        }
        break;
    }
     cout << "next date is" << to_day << " " << to_month << " " << to_year << endl;
}

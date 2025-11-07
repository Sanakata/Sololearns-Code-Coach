#include <iostream>
#include <map>
#include <sstream>
#include <iomanip>
using namespace std;

/*
Title: Days between dates
Difficulty: Medium
*/

const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date{
    int d, m, y;
};

int countLeapYears(Date d){
    int years = d.y;
    if(d.m <= 2) years--;
    return years / 4 - years / 100 + years / 400;
}

int monthNameToNum(const string& monthName){
    static const map<string, int> monthMap = {{"January", 1}, {"February", 2}, {"March", 3}, {"April", 4}, {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8}, {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}};
    auto it = monthMap.find(monthName);
    return it->second;
}

Date parseDate(const string& dateString){
    string day, month, year;
    char comma;
    stringstream ss(dateString);
    ss >> month >> day >> year;
    day = day.substr(0, day.size() - 1);
    Date d;
    d.d = stoi(day);
    d.m = monthNameToNum(month);
    d.y = stoi(year);
    return d;
}

long long getDifference(const Date& dt1, const Date& dt2){
    long long days1 = (long long) dt1.y * 365 + dt1.d + countLeapYears(dt1), days2 = (long long) dt2.y * 365 + dt2.d + countLeapYears(dt2);
    for(int i = 0; i < dt1.m - 1; i++) days1 += monthDays[i];
    for(int i = 0; i < dt2.m - 1; i++) days2 += monthDays[i];
    return abs(days1 - days2);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string dateString1, dateString2; getline(cin, dateString1), getline(cin, dateString2);
    Date dt1 = parseDate(dateString1), dt2 = parseDate(dateString2);
    long ans = getDifference(dt1, dt2);
    cout << ans << "\n";
}

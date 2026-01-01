#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

/*
Title: Days between dates
Difficulty: Medium
*/

long long get_total_days(string date_str){
    struct tm t = {0};
    strptime(date_str.c_str(), "%B %d, %Y", &t);
    return mktime(&t) / 86400;
}

int main(){
    string s1, s2; getline(cin, s1), getline(cin, s2);
    long long days1 = get_total_days(s1), days2 = get_total_days(s2);
    cout << abs(days1 - days2) << "\n";
}

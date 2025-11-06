#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
using namespace std;

/*
Title: Days of the Week
Difficulty: Medium
*/

string getDayOfWeek(const string& dateString){
    tm parsed_time = {};
    stringstream ss(dateString);
    ss >> get_time(&parsed_time, "%m/%d/%Y");

    if(ss.fail()){
        ss.clear();
        ss.seekg(0);
        ss >> get_time(&parsed_time, "%B %d, %Y");
    }

    time_t time_t_date = mktime(&parsed_time);
    char buffer[100];
    strftime(buffer, sizeof(buffer), "%A", &parsed_time);
    return string(buffer);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string dateString; getline(cin, dateString);
    cout << getDayOfWeek(dateString) << "\n";
}

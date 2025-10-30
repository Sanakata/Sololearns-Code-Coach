#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <sstream>
using namespace std;

/*
Title: Convert US date to EU date
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string date; getline(cin, date);
    int day, month, year;
    if(sscanf(date.c_str(), "%d/%d/%d", &month, &day, &year) == 3){
        cout << day << "/" << month << "/" << year << "\n";
    }else{
        unordered_map<string, int> mName {{"January", 1}, {"February", 2} , {"March", 3}, {"April", 4}, {"May", 5}, {"June", 6}, {"July", 7}, {"August", 8}, {"September", 9}, {"October", 10}, {"November", 11}, {"December", 12}};
        int c = 0;
        string d;
        istringstream ss(date);
        while(ss >> d){
            if(c == 0) month = mName[d];
            if(c == 1) day = stoi(d.substr(0, d.size() - 1));
            if(c == 2) year = stoi(d);
            c++;
        }
        cout << day << "/" << month << "/" << year << "\n";
    }
}

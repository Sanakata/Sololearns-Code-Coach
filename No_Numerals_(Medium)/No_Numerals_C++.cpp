#include <iostream>
#include <sstream>
using namespace std;

/*
Title: No Numerals
Difficulty: Medium
*/

string sayNum(int n){
    switch(n){
        case 0:
        return "zero";
        case 1:
        return "one";
        case 2:
        return "two";
        case 3:
        return "three";
        case 4:
        return "four";
        case 5:
        return "five";
        case 6:
        return "six";
        case 7:
        return "seven";
        case 8:
        return "eight";
        case 9:
        return "nine";
        case 10:
        return "ten";

    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, word; getline(cin, s);
    istringstream ss(s);
    while(ss >> word){
        if(isdigit(word[0])){
            int n = stoi(word);
            cout << (n < 11 ? sayNum(n) : word);
        }else cout << word;
        cout << " ";
    }
}

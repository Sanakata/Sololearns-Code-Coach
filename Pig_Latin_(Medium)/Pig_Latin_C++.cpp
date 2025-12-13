#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Pig Latin
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false);
    string sentence, word; getline(cin, sentence);
    stringstream ss(sentence);
    while(ss >> word){
        cout << word.substr(1) + word[0] + "ay ";
    }
}

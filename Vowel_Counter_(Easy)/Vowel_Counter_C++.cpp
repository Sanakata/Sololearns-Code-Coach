#include <iostream>
#include <string>
#include <algorithm>
#include <string_view>
using namespace std;

/*
Title: Vowel Counter
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string input; getline(cin, input);
    string_view vowels = "aiueoAIUEO";
    auto totalVowels = count_if(input.begin(), input.end(), [&](char c){
            return vowels.find(c) != string_view::npos;
    });
    cout << totalVowels << "\n";
}

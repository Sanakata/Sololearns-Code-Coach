#include <iostream>
using namespace std;

/*
Title: Word Rank
Difficulty: Hard
*/

long long factorial(int n){
    long long res = 1;
    for(int i = 2; i <= n; i++) res *= i;
    return res;
}

long long findRank(const string& word){
    int n = word.size();
    int freq[26] = {0};
    long long rank = 0, denominator, numerator, temp_denominator;
    for(char c : word) freq[c - 'A']++;
    for(int i = 0; i < n; i++){
        denominator = 1;
        for(int count : freq) if(count > 0) denominator *= factorial(count);
        for(char c = 'A'; c < word[i]; c++){
            int char_index = c - 'A';
            if(freq[char_index] > 0){
                numerator = factorial(n - 1 - i);
                temp_denominator = denominator / factorial(freq[char_index]) * factorial(freq[char_index] - 1);
                rank += numerator / temp_denominator;
            }
        }
        freq[word[i] - 'A']--;
    }
    return rank + 1;
}


int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    cout << findRank(s) << "\n";
}

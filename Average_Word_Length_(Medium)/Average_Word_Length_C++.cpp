#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Average Word Length
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int total = 0, totalWords = 0, average;
    string sentence, word; getline(cin, sentence);
    stringstream words(sentence);
    while(words >> word){
        for(int i = 0; i < word.size(); i++){
            if(isalnum(word[i])) total++;
        }
        totalWords++;
    }
    average = total / totalWords + (total % totalWords != 0);
    cout << average << "\n";
}

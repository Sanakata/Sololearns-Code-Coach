#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

/*
Title: Longest Common Substring
Difficulty: Hard
*/

string lcs(vector<string>& v_words){
    int shortest_index = 0, n = v_words.size();
    for(int i = 1; i < n; i++){
        if(v_words[shortest_index].length() > v_words[i].length()) shortest_index = i;
    }
    string shortest_word = v_words[shortest_index], lcs_word = "";
    for(int i = 0; i < shortest_word.size(); i++){
        for(int j = 1;  i + j <= shortest_word.size(); j++){
            string current_substring = shortest_word.substr(i, j);
            bool isCommon = true;
            for(int k = 0; k < n; k++){
                if(v_words[k].find(current_substring) == string::npos){
                    isCommon = false;
                    break;
                }
            }
            if(isCommon){
                if(current_substring.length() > lcs_word.length()) lcs_word = current_substring;
                else if(current_substring.length() == lcs_word.length() && current_substring < lcs_word) lcs_word = current_substring;
            }
        }
    }
    return lcs_word;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string words, word; getline(cin, words);
    vector<string> v_words;
    stringstream ss(words);
    while(ss >> word) v_words.push_back(word);
    cout << lcs(v_words) << "\n";
}

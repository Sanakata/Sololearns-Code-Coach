#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Jungle Camping
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string sounds, sound; getline(cin, sounds);
    istringstream iss(sounds);
    while(iss >> sound){
        cout << (sound == "Grr" ? "Lion" : (sound == "Rawr" ? "Tiger" : (sound == "Ssss" ? "Snake" : "Bird"))) << " ";
    }
}

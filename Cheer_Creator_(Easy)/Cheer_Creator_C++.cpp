#include <iostream>
using namespace std;

/*
Title: Cheer Creator
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int yards; cin >> yards;
    if(yards < 1) cout << "shh";
    else if(yards > 10) cout << "High Five";
    else{
        for(int i = 0; i < yards; i++) cout << "Ra!";
    }
}

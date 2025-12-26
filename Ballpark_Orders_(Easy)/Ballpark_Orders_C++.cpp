#include <iostream>
using namespace std;

/*
Title: Ballpark Orders
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string order[4];
    int total = 0;
    for(int i = 0; i < 4; i++){
        cin >> order[i];
        if(order[i] == "Nachos" || order[i] == "Pizza") total += 6;
        else if(order[i] == "Cheeseburger") total += 10;
        else if(order[i] == "Water") total += 4;
        else if(order[i] == "Coke") total += 5;
        else total += 5;
    }
    cout << (double) total * 107 / 100 << "\n"; 
}

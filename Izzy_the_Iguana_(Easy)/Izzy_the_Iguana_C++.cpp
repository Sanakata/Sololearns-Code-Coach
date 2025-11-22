#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Izzy the Iguana
Difficulty: Easy
*/

int main(){
    int snack_points = 0;
    string foods, food;
    getline(cin, foods);
    istringstream iss(foods);
    while(snack_points <= 9 && iss >> food) snack_points += (food == "Mango" ? 9 : (food == "Lettuce" ? 5 : (food == "Carrot" ? 4 : 0)));
    cout << (snack_points > 9 ? "Come on Down!" : "Time to wait");
}

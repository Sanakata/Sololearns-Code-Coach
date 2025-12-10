#include <iostream>
using namespace std;

/*
Title: Popsicles
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a, b; cin >> a >> b;
    cout << (b % a == 0 ? "give away" : "eat them yourself") << "\n";
}

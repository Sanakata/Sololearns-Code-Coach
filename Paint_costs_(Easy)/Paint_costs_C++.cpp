#include <iostream>
using namespace std;

/*
Title: Paint costs
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long n; cin >> n;
    long long total_cost = 4000 + (n * 500), tax = total_cost * 10 / 100, final_cost = (total_cost + tax + 99) / 100;
    cout << final_cost;
}

#include <iostream>
using namespace std;

/*
Title: Tax Free
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string purchases, s_price; cin >> purchases;
    purchases += ',';
    double total = 0, price;
    for(char& c : purchases){
        if(c != ',') s_price += c;
        else{
            price = stod(s_price);
            total += (price * (price >= 20.0 ? 1.0 : 1.07));
            s_price = "";
        }
    }
    cout << total << "\n";
}

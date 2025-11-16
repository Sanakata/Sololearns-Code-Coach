#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Balconies
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string a, b, s;
    int Aa = 1, Ab = 1;
    getline(cin, a), getline(cin, b);
    stringstream ssa(a), ssb(b);
    while(getline(ssa, s, ',')) Aa *= stoi(s);
    while(getline(ssb, s, ',')) Ab *= stoi(s);
    cout << "Apartment " << (Aa > Ab ? "A" : "B") << "\n";
}

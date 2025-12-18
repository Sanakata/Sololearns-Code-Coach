#include <bits/stdc++.h>
using namespace std;

/*
Title: Hovercraft
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    cout << (n > 7 ? "Profit" : (n == 7 ? "Broke Even" : "Loss"));
}

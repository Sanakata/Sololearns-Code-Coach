#include <iostream>
using namespace std;

/*
Title: Snap, Crackle, Pop
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    for(int i = 0; i < 6; i++){
        int n; cin >> n;
        cout << (n % 3 == 0 ? "Pop" : (n % 2 == 1 ? "Snap" : "Crackle")) << " ";
    }
}

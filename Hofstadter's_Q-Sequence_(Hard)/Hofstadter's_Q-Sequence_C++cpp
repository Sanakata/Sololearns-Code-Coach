#include <iostream>
#include <vector>
using namespace std;

/*
Title: Hofstadter's Q-Sequence
Difficulty: Hard
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<int> hof_seq;
    for(int i = 0; i < 3; i++) hof_seq.push_back(1);
    int n; cin >> n;
    for(int i = 3; i <= n; i++) hof_seq.push_back(hof_seq[i - hof_seq[i - 1]] + hof_seq[i - hof_seq[i - 2]]);
    cout << hof_seq[n] << "\n";
}

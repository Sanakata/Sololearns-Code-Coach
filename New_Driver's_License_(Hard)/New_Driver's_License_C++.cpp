#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
Title: New Driver's License
Difficulty: Hard
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<string> queue;
    string yName; cin >> yName;
    int agents, index; cin >> agents;
    queue.push_back(yName);
    for(int i = 0; i < 4; i++){
        string name; cin >> name;
        queue.push_back(name);
    }
    sort(queue.begin(), queue.end());
    auto it = find(queue.begin(), queue.end(), yName);
    index = distance(queue.begin(), it);
    cout << ceil((double) ++index / agents) * 20 << "\n";
}

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

/*
Title: Super Sale
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string items, item; cin >> items;
    vector<double> prices;
    double price, ans = 0;
    istringstream ss(items);
    while(getline(ss, item, ',')){
        price = stod(item);
        prices.push_back(price);
    }
    sort(prices.begin(), prices.end(), greater<double>());
    for(int i = 1; i < prices.size(); i++) ans += (prices[i] * 0.3);
    ans *= 1.07;
    cout << floor(ans) << "\n";
}

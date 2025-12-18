#include <bits/stdc++.h>
using namespace std;

/*
Title: Number of Ones
Difficulty: Easy
*/ 

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, ans = 0; cin >> n;
    while(n > 0){
        ans += (n % 2);
        n /= 2;
    }
    cout << ans << "\n";
}

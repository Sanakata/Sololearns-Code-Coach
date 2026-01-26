#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    cout << (long long) n + (n % 2 == 0 ? 4 : 9) << " " << (n % 2 == 0 ? 4 : 9);
}

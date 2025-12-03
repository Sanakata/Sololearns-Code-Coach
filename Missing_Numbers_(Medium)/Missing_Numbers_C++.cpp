#include <iostream>
using namespace std;

/*
Title: Missing Numbers
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i > 0) for(int j = a[i - 1] + 1; j < a[i]; j++) cout << j << " ";
    }
}

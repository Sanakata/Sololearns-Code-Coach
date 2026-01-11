#include <stdio.h>

/*
Title: Gotham City
Difficulty: Easy
*/

int main(){
    long long c;
    scanf("%lld", &c);
    printf(c > 10 ? "Good Luck out there!" : (c > 4 ? "Help me Batman" : "I got this!"));
}

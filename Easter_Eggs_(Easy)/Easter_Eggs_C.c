#include <stdio.h>

/*
Title: Easter Eggs
Difficulty: Easy
*/

int main(){
    long long t, y, f;
    scanf("%lld\n%lld\n%lld", &t, &y, &f);
    printf(t == y + f ? "Candy Time" : "Keep Hunting");
}

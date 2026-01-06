#include <stdio.h>

/*
Title: Skee-Ball
Difficulty: Easy
*/

int main(){
    int points, cost;
    scanf("%d", &points);
    scanf("%d", &cost);
    printf(points / 12 >= cost ? "Buy it!" : "Try again");
}

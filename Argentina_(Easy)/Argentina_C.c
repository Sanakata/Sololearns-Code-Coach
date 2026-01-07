#include <stdio.h>

/*
Title: Argentina
Difficulty: Easy
*/

int main(){
    int d, p;
    scanf("%d", &d);
    scanf("%d", &p);
    printf(d / 50 < p ? "Pesos" : "Dollars");
}

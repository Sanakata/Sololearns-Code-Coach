#include <stdio.h>

/*
Title: Hovercraft
Difficulty: Easy
*/

int main(){
    int n;
    scanf("%d", &n);
    printf(n > 7 ? "Profit" : (n == 7 ? "Broke Even" : "Loss"));
}

#include <stdio.h>
#include <math.h>

/*
Title: Land Ho!
Difficulty: Easy
*/

int main(){
    int p, w;
    scanf("%d", &p);
    w = ceil((double) ++p / 20);
    printf("%d", (1 + 2 * --w) * 10);
}

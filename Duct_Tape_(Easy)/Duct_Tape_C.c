#include <stdio.h>

/*
Title: Duct Tape
Difficulty: Easy
*/

int main(){
    long long h, w;
    scanf("%lld", &h);
    scanf("%lld", &w);
    printf("%lld", h * w / 5 + ((w * h) % 5 != 0));
}

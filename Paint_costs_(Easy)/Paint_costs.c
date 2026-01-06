#include <stdio.h>

/*
Title: Paint costs
Difficulty: Easy
*/

int main(){
    long long n;
    scanf("%lld", &n);
    long long total_cost = ((4000 + (n * 500)) * 110 + 9999) / 10000;
    printf("%lld", total_cost); 
}

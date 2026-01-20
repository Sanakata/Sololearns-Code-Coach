#include <stdio.h>
#include <math.h>

/*
Title: Kaleidoscopes
Difficulty: Easy
*/

int main(){
    int n, multiplier = 100;
    scanf("%d", &n);
    double price = n * 5.0, dc_price = price * (n > 1 ? 0.9 : 1), fn_price = dc_price * 1.07, rounded_price = round(fn_price * multiplier) / multiplier;
    printf("%.2lf", rounded_price);
}

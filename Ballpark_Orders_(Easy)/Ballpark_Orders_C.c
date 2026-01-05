#include <stdio.h>
#include <string.h>

/*
Title: Ballpark Orders
Difficulty: Easy
*/

int main(){
    char order[50];
    int subTotal = 0;
    double total;
    for(int i = 0; i < 4; i++){
        scanf("%s", order);
        if(strcmp(order, "Pizza") == 0 || strcmp(order, "Nachos") == 0) subTotal += 6;
        else if(strcmp(order, "Cheeseburger") == 0) subTotal += 10;
        else if(strcmp(order, "Water") == 0) subTotal += 4;
        else subTotal += 5; 
    }
    total = subTotal * 1.07;
    printf("%.2lf\n", total);
}

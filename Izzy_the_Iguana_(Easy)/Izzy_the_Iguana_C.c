#include <stdio.h>
#include <string.h>

/*
Title: Izzy the Iguana
Difficulty: Easy
*/

int main(){
    int snackPoints = 0;
    char foods[1000];
    fgets(foods, sizeof(foods), stdin);
    foods[strcspn(foods, "\n")] = 0;
    char *food = strtok(foods, " ");
    while(food != NULL){
        if(strcmp(food, "Lettuce") == 0) snackPoints += 5;
        else if(strcmp(food, "Carrot") == 0) snackPoints += 4;
        else if(strcmp(food, "Mango") == 0) snackPoints += 9;
        food = strtok(NULL, " ");
    }
    printf(snackPoints < 10 ? "Time to wait" : "Come on Down!");
}

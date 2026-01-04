#include <stdio.h>

/*
Title: Popsicles
Difficulty: Easy
*/

int main(){
    int siblings, popsicles;
    scanf("%d %d", &siblings, &popsicles);
    printf(popsicles % siblings ? "eat them yourself" : "give away");
}

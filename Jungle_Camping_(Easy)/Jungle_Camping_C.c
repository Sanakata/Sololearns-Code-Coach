#include <stdio.h>
#include <string.h>

/*
Title: Jungle Camping
Difficulty: Easy
*/

int main(){
    char noises[1000];
    fgets(noises, sizeof(noises), stdin);
    noises[strcspn(noises, "\n")] = 0;
    char *noise = strtok(noises, " ");
    while(noise != NULL){
        printf(strcmp(noise, "Grr") == 0 ? "Lion " : (strcmp(noise, "Rawr") == 0 ? "Tiger " : (strcmp(noise, "Ssss") == 0 ? "Snake " : "Bird ")));
        noise = strtok(NULL, " ");
    }
}

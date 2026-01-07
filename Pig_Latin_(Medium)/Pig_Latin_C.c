#include <stdio.h>
#include <string.h>

/*
Title: Pig Latin
Difficulty: Easy
*/

int main(){
    char sentence[1000];
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0;
    char *word = strtok(sentence, " ");
    while(word != NULL){
        printf("%s%cay ", word + 1, word[0]);
        word = strtok(NULL, " ");
    }
}

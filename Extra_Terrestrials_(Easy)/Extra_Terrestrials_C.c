#include <stdio.h>
#include <string.h>

/*
Title: Extra-Terrestrials
Difficulty: Easy
*/

void reverseString(char *str){
    int left = 0, right = strlen(str) - 1;
    char temp;
    while(left < right){
        temp = str[left];
        str[left] = str[right], str[right] = temp;
        left++, right--;
    }
}

int main(){
    char word[100];
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0;
    reverseString(word);
    printf("%s", word);
}

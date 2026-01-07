#include <stdio.h>
#include <string.h>

/*
Title: Safety Deposit Boxes
Difficulty: Easy
*/

int main(){
    int ans = 0;
    char items[1000];
    char target[100];
    fgets(items, sizeof(items), stdin);
    fgets(target, sizeof(target), stdin);
    items[strcspn(items, "\n")] = 0;
    target[strcspn(items, "\n")] = 0;
    char *item = strtok(items, ",");
    while(item != NULL){
        ans += 5;
        if(strcmp(item, target) == 0) break;
        item = strtok(NULL, ",");
    }
    printf("%d", ans);
}

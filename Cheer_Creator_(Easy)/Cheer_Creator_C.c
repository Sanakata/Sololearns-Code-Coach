#include <stdio.h>

/*
Title: Cheer Creator
Difficulty: Easy
*/

int main(){
    int yards;
    scanf("%d", &yards);
    if(yards < 1) printf("shh");
    else if(yards > 10) printf("High Five");
    else for(int i = 0; i < yards; i++) printf("Ra!");
}

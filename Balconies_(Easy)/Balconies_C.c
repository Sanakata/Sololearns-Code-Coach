#include <stdio.h>

/*
Title: Balconies
Diffiiculty: Easy
*/

int main(){
    int lA, wA, lB, wB;
    char A[100], B[100];
    scanf("%s", A);
    scanf("%s", B);
    sscanf(A, "%d, %d", &lA, &wA);
    sscanf(B, "%d, %d", &lB, &wB);
    printf("Apartment %c", lA * wA > lB * wB ? 'A' : 'B');
}

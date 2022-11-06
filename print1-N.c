//Documentation - This Program is written to print all Natural number from 1 to N (where N is the number inputted by a user)

#include <stdio.h>

int i, N;
int main(){
        
    //Input N by user
    printf("Enter value for N: ");
    scanf("%d", &N);

    printf("Natural number from 1 to %d : \n", N);

    //loop to print all natural number between 1 and N
    for( i=1; i<=N; i++){
        printf("%d\n", i);
    }

    return 0;
}
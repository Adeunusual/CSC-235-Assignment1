//Documentation, this is a Program written to accept 10 students name and display all Names.    
#include <stdio.h>

int main(){

    int i;

    int n = 10;

    char array[n][20];

    for(i=1; i<=10; i++){
        printf("Enter name%d: ", i);
        scanf("%s", array[i]);
    }

    printf("10 Names Entered are:");
    for(i=1; i<=10; i++){
        printf("%s\n", array[i]);
    }


    return 0;
}
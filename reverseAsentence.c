//Documentation- his Program is written to reverse a sentence

#include <stdio.h>
#include <string.h>


int main(){
   char string[25], temp;
   int i, length;

   printf("Enter string: ");
   scanf("%s", string);
   length = strlen(string) - 1;
   for (i = 0; i < strlen(string)/2; i++)
   {
    temp=string[i];
    string[i]=string[length];
    string[length--]=temp;
   }
   printf("Reversed version: %s", string);
   
    return 0;
   
}
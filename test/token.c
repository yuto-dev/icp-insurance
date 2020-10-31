#include<stdio.h>
#include <string.h>

int main() {
   int placeholder;
   int i = 0;
   char numberArray[128] = "John;17;Street;Kuala Lumpur;100000;0;150";
   char *token;
   token = strtok(numberArray,";");
   printf("%s\n", token);
   char string[7][16] = {"John","17","Street","Kuala Lumpur","100000","0","150"};
   for (i = 0;i < 7;i++){
      printf("%s\n", string[i]);
   }
   
   scanf("%d",&placeholder);
   return 0;
}
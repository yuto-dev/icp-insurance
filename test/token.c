#include<stdio.h>
#include <string.h>

int main() {
    int placeholder;
    int i = 0;
    char numberArray[128];
   char string[50] = "John;17;Street;Kuala Lumpur;100000;0;150;";
   // Extract the first token
   char * token = strtok(string, ";");
   // loop through the string to extract all other tokens
   while( token != NULL ) {
      printf( " %s\n", token ); //printing each token
      //scanf(token, "%s;", &numberArray[i]);
      token = strtok(NULL, ";");
   }
   //for (i = 0; i < 7; i++){
        //fscanf(token, "%s;", &numberArray[i] );
    //}
   scanf("%d",&placeholder);
   return 0;
}
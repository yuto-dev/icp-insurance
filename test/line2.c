#include <stdio.h>

int main(){
    int x = 7;
    int limit = 10;
    int lineNumber = x + 1, placeholder;
    int numHolder[10];
    static const char filename[] = "line.txt";
    FILE *file = fopen(filename, "r");
    int count = 0;
    if ( file != NULL ){
        int line; /* or other suitable maximum line size */
        while (count < limit) /* read a line */    
        {
            fscanf(file, "%d", &line);
            if (count == lineNumber)
            {
                line = line + 100;
                //printf("%d", line);
                //scanf("%d", placeholder);
            }
            numHolder[count] = line;
            printf("%d\n", numHolder[count]);
            count++;
        }
        fclose(file);
        //printf("%s", numHolder);
        scanf("%d", placeholder);
    }
    return 0;
}
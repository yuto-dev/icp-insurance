#include <stdio.h>

int main(){
    int lineNumber = 7, placeholder;
    int numHolder[10];
    static const char filename[] = "line.txt";
    FILE *file = fopen(filename, "r");
    int count = 1;
    if ( file != NULL ){
        int line; /* or other suitable maximum line size */
        while (count < 11) /* read a line */    
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
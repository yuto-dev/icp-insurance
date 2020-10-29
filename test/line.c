#include <stdio.h>

int main(){
    int lineNumber = 7, placeholder;

    static const char filename[] = "line.txt";
    FILE *file = fopen(filename, "r");
    int count = 1;
    if ( file != NULL ){
        char line[256]; /* or other suitable maximum line size */
        while (fgets(line, sizeof line, file) != NULL) /* read a line */    
        {
            if (count == lineNumber)
            {
                printf("%s", line);
                scanf("%d", placeholder);
            }
            else
            {
                count++;
            }
        }
        fclose(file);
    }
    return 0;
}
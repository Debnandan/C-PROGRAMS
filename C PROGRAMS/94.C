#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("text2.txt", "a");
    fprintf(fptr, "%c", 'm');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    fclose(fptr);
    return 0;
}
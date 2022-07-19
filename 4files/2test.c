#include <stdio.h>

int main()
{
    printf("ok\n");

    FILE *fp;
    int c;

    fp = fopen("myfile.txt","r");

    if(fp == NULL){ printf("error opening the file"); return -1; }

    //any character is represented by a positive integer in the ASCII table, while EOF is -1, thus this securely indicate that
    // if this function returns -1 as a value, it's not an actual character
    printf("EOF value: %d\n", EOF); 

    while( (c = fgetc(fp)) != EOF )
    {
        printf("%c", c);
    }


    fclose(fp); //you should always close a file before renaming it
    fp = NULL;

    return 0;
}
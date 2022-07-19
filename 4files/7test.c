#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ok\n");

    FILE *fp;
 
    fp = fopen("output.txt","r");
    if(fp == NULL){ printf("error opening the file"); return -1; }


    fseek(fp, 0, SEEK_END); //go to the end of the file
    int len = 0;
    len = ftell(fp);
    printf("len: %d", len);




    fclose(fp); //you should always close a file before renaming it
    fp = NULL;


    return 0;
}
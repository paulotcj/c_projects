#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ok\n");

    FILE *fp;
 
    fp = fopen("output.txt","w");
    if(fp == NULL){ printf("error opening the file"); return -1; }

    fputs("first string from executable\r\n", fp);
    fputs("second string from executable\r\n", fp);



    fclose(fp); //you should always close a file before renaming it
    fp = NULL;

    return 0;
}
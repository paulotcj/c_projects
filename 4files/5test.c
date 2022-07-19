#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ok\n");

    FILE *fp;
    char str1[20], str2[20], str3[20];


    fp = fopen("myfile2.txt","r+");

    if(fp == NULL){ printf("error opening the file"); return -1; }

    //rewind(fp); //?


    fscanf(fp, "%s %s %s", str1, str2, str3);

    printf("str1: %s, str2: %s, str3: %s\n", str1,str2,str3);

    fclose(fp); //you should always close a file before renaming it
    fp = NULL;

    return 0;
}
#include <stdio.h>

int main()
{
    printf("ok\n");

    FILE *fp;
    char str[101];
    char str2[] = "test";


    fp = fopen("myfile.txt","r");

    if(fp == NULL){ printf("error opening the file"); return -1; }


    if( fgets(str, 100, fp) != NULL )
    {
        printf("%s",str);    
    }
    printf("\n");
    printf("%s",str2); 

    long fposition = 0;
    fposition = ftell(fp);

    printf("fposition: %d", fposition);


    fclose(fp); //you should always close a file before renaming it
    fp = NULL;

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ok\n");

    FILE *fp;
 
    fp = fopen("output2.txt","w+");
    if(fp == NULL){ printf("error opening the file"); return -1; }

    //SEEK_SET - defines the begining of the file
    //SEEK_CUR - defines the current position in the file
    //SEEK_END - defines the end of the file

    fputs("This is xxxx",fp);
    fseek(fp, 7, SEEK_SET); //using the file-pointer, place the pointer at the 7th character from the begining (SEEK_SET)
    fputs("Hello how are you",fp);


    fclose(fp); //you should always close a file before renaming it
    fp = NULL;


    return 0;
}
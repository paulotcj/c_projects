#include <stdio.h>



int main()
{
    printf("hello\n");

    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    char *newFileName = "new_myfile.txt";
    pfile = fopen(filename, "w");

    if(pfile == NULL){ printf("failed to open file");  }

    fclose(pfile); //you should always close a file before renaming it
    pfile = NULL;

    if(rename(filename,newFileName))
    {printf("failed to rename file");}
    else
    {printf("file renamed");}

    remove(newFileName);





    return 0;
}
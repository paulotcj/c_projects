#include <stdio.h>
#include <string.h>


int main()
{
    printf("hello\n");

    char str1[] = "The quick brown fox";

    for(int i = 0 ; str1[i] != '\0' ; i++)
    {
        printf("str1[%d] : %c\n",i,str1[i]);
    }

    char char_q = 'T';
    char *pGot_char = NULL;

    //printf("*pGot_char : %c",*pGot_char);

    pGot_char = strchr(str1,char_q);

    printf("\n\n&str1 : %d \n", &str1);
    printf("&str1[0] : %d \n", &str1[0]);
    printf("*pGot_char : %c - pGot_char: %d \n",*pGot_char, pGot_char);

    char_q = 'h';
    pGot_char = strchr(str1,char_q);
    printf("*pGot_char : %c - pGot_char: %d \n",*pGot_char, pGot_char);

    char_q = 'q';
    pGot_char = strchr(str1,char_q);
    printf("*pGot_char : %c - pGot_char: %d \n",*pGot_char, pGot_char);




    return 0;
}






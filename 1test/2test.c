#include <stdio.h>
#include <string.h>

#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

//extern long double strtod(const char *, char **);

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

    char string_To_find[] = "quick";
    pGot_char = NULL;
    pGot_char = strstr(str1, string_To_find);
    printf("substring search: %s\n", string_To_find);
    printf("*pGot_char : %c - pGot_char: %d \n",*pGot_char, pGot_char);

    printf("-------------------------------------\n");

    char str2[] = "Hello how are you - my name is - Jason";
    const char token_delimitator[2] = "-"; //remember, the compiler add a second char as a string terminator '/0', we could've left as onst char token_delimitator[] = "-";

    //---    
    pGot_char = strtok(str2,token_delimitator);
    while(pGot_char != NULL)
    {
        printf(" %s\n",pGot_char);
        pGot_char = strtok(NULL,token_delimitator); //strtok() stores the pointer in static variable where did you last time left off , so on its 2nd call , when we pass the null , strtok() gets the pointer from the static variable
    }
    //---

    printf("-------------------------------------\n");

    for(int i = 0 ; ( str1[i] = (char)toupper(str1[i]) ) != '\0' ; i++);

    printf("%s\n", str1);

    for(int i = 0 ; str1[i] != '\0'  ; i++)
    {
        str1[i] = (char)tolower(str1[i]);
    }
    printf("%s\n", str1);
    printf("-------------------------------------\n");

    double doubleValue1;
    char doubleInString[] = "3.5 2.5 1.26"; //string to be converted
    char *pointerToString = doubleInString; //pointer to the string to be converted - it's necessary, see below
    char *endPtr; //pointer to character position at the end of (possible successful N) conversion

    while(true)
    {

        doubleValue1 = strtod(pointerToString, &endPtr);   //convert
        if(pointerToString == endPtr){ break;} //if no conversion was made
        else
        {
            printf(" %f \n", doubleValue1);
            pointerToString = endPtr; //set pointers for the next conversion

        }
    }

    printf("-------------------------------------\n");
    //if your conversion on windows is not working, double check on any mac or linux machine with their native gcc compiler
    // you might find more useful information there
    char str[30] = "20.30300 This is test";
    char *ptr;
    double ret;

    ret = strtod(str, &ptr);
    printf("The number(double) is %lf\n", ret);
    printf("String part is |%s|", ptr);





    return 0;
}






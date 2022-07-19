#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *str;
    str = (char*)malloc(sizeof(char)*20); //initial memory allocation
    strcpy(str , "The quick brown fox" );

    printf("%s  \n", str);
    
    str = (char*)realloc(str, 44);

    strcat(str, " jumps over the lazy dog");
    printf("%s  \n", str);

    free(str);

    printf("-------------------------------------\n");

    struct
    {
        int year;
        int month;
        int day;
    } day0;

    day0.year = 2022;
    day0.month = 2; //not really, just an example
    day0.day = 1;

    printf("day0 is: %d/%d/%d \n",day0.year, day0.month, day0.day);

    struct datetest
    {
        int year;
        int month;
        int day;
    };

    struct datetest day1;
    day1.year = 2022;
    day1.month = 3;
    day1.day = 2;

    printf("day1 is: %d/%d/%d \n",day1.year, day1.month, day1.day);


    struct datetest day2 = {2023, 4, 3};

    printf("day2 is: %d/%d/%d \n",day2.year, day2.month, day2.day);
    
    struct datetest day3 = {.month = 5, .day=4};
    printf("day3 is: %d/%d/%d \n",day3.year, day3.month, day3.day);

    day3 = (struct datetest) {2022, 1, 1};
    printf("day3 is: %d/%d/%d \n",day3.year, day3.month, day3.day);

    struct datetest datearr1[10];

    datearr1[0].year = 2019;
    datearr1[1].year = 2020;
    datearr1[2].year = 2021;

    printf(" datearr1[0].year is: %d \n", datearr1[0].year);
    printf(" datearr1[1].year is: %d \n", datearr1[1].year);
    printf(" datearr1[2].year is: %d \n", datearr1[2].year);

    struct datetest datearr2[5] = {{1980},{1981},{1982}};

    
    printf(" datearr2[0].year is: %d \n", datearr2[0].year);
    printf(" datearr2[1].year is: %d \n", datearr2[1].year);
    printf(" datearr2[2].year is: %d \n", datearr2[2].year);

    struct datetest datearr3[5] = {1980,02,28,1981,03,28,1983,04,28};

    for(int i = 0 ; i < 3 ; i++)
    {
        printf("struct datetest datearr'N'[%d] is: %d/%d/%d \n",i, datearr3[i].year, datearr3[i].month, datearr3[i].day);
    }

    struct datetest datearr4[5] = {[2] = {1984,5,28} };

    printf(" datearr4[2].year is:  %d/%d/%d \n",datearr4[2].year, datearr4[2].month, datearr4[2].day);

    struct datetest datearr5[5] = {[2].month = 12, [2].day = 31 };

    printf(" datearr5[2].year is:  %d/%d/%d \n",datearr5[2].year, datearr5[2].month, datearr5[2].day);


    struct strc1 
    {
        int num; 
        char str[10];
    };
    struct strc1 test1;
    test1.num =1;
    test1.str[0] = 'J';
    test1.str[1] = 'a';
    test1.str[2] = 'n';
    test1.str[3] = 'e';
    test1.str[4] = '\0';

    printf("num: %d , string: %s\n",test1.num, test1.str);

    struct strc1 test2 = {1, {'P','o','p','e','\0'}};

    printf("num: %d , string: %s\n",test2.num, test2.str);


    printf("-------------------------------------\n");


    struct strc2
    {
        struct strc1 s1;
        struct datetest s2;
    };

    struct strc2 test3;

    test3.s2.year = 1998;
    test3.s1.num = 1997;


    printf("-------------------------------------\n");

    struct strc2 *strcPtr1;

    strcPtr1 = &test3;

    strcPtr1->s1.num= 1999;

    printf("strcPtr1->s1.num : %d\n",strcPtr1->s1.num);

    (*strcPtr1).s1.num = 2000;

    printf("strcPtr1->s1.num : %d\n",strcPtr1->s1.num);

    printf("(*strcPtr1).s1.num : %d\n",(*strcPtr1).s1.num);

    printf("-------------------------------------\n");
    struct structwithpointers
    {
        int *num1;
        int *num2;
    };
    
    int num11 = 11, num22 = 22;
    struct structwithpointers test4;

    test4.num1 = &num11;
    test4.num2 = &num22;

    printf("*test4.num : %d\n",*test4.num1);

    *test4.num1 = 33;

    printf("num11 : %d\n",num11);
    printf("*test4.num : %d\n",*test4.num1);



    printf("-------------------------------------\n");

    printf("FOPEN_MAX : %d\n",FOPEN_MAX);
    
}
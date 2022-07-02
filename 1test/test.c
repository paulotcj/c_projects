//NOTE: This program is meant to be compiled on macOS or Linux. The last compilation was made on macOS

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define DEFINE_NUMBER_HEADER 111
 
int main(int argc, char *argv[])
{
    //validating the envionment
    printf("Test\n");

    int a = 2;
    int b = 4;
    
    _Bool c = 1;

    bool d = true;

    enum primaryColors {red , yellow, blue = 44, green};

    enum primaryColors objColor; 
    objColor = red;
    printf("red %d\n",objColor);

    objColor = yellow;
    printf("yellow %d\n",objColor);


    objColor = blue;
    printf("blue %d\n",objColor);


    objColor = green;
    printf("green %d\n",objColor);

    enum primaryColors objColor2; 

    _Bool sameColour1 = (objColor == objColor2);
    bool sameColour2 = (objColor == objColor2); 


    printf("Same colour (1) %d\n",sameColour1);
    printf("Same colour (2) %d\n",sameColour2);

    //------------------
    //format specifiers

    int intVar = 111;
    float floatVar = 222.222222222;
    double doubleVar = 3.33e+11;
    char charVar = 'C';
    _Bool boolVar = 0;
    printf("-------------------------------------\n");
    printf("intVar : %i\n", intVar);
    printf("floatVar : %f\n",floatVar);
    printf("floatVar : %.2f\n",floatVar);
    printf("doubleVar : %e\n",doubleVar);
    printf("doubleVar : %g\n",doubleVar);
    printf("charVar : %c\n",charVar);
    printf("boolVar : %i\n",boolVar);
    printf("-------------------------------------\n");
    printf("argc : %d\n",argc);

    //argv[0] = program file name
    //argv[1] = argument #1 (if any)
    //argv[2] = argument #2 (if any)
    //...
    //until eventually no argument is passed and this spot will be null
    //then we can expect a series of metadata being passed

    

    //in most cases we can loop until i = 42
    for(int i = 0; i < 39 || argv[i] != NULL ; i=i+1)
    {
        printf("argv[%i] : %s\n",i,argv[i]);
    }
    printf("-------------------------------------\n");

    char *names4[]={"John", "Paul", "George", "Ringo"}; // Four elements
    printf("names4 = %zu\n",sizeof(names4)/sizeof(names4[0]));
    for(int i = 0; i < sizeof(names4)/sizeof(names4[0]) ; i=i+1)
    {
        printf("names4[%i] : %s\n",i,names4[i]);
    }

    printf("-------------------------------------\n");

    for(int i = 0; i < 39 || argv[i] != NULL ; i=i+1)
    {
        printf("argv[%i] : %s\n",i,argv[i]);
    }

    printf("-------------------------------------\n");

    int binary1 = 0b11001000; 
    int binary2 = 0b10111000; 

    // AND
    //   11001000  
    // & 10111000 
    //   -------- 
    // = 10001000    
    int result = binary1 & binary2; //expected 136 - 0b10001000

    printf("binary1 : %i\n", binary1);

    printf("result : %i\n", result);

    // OR
    //   11001000  
    // | 10111000 
    //   -------- 
    // = 11111000
    result = binary1 | binary2; // expected 248 - 0b11111000

    printf("result : %i\n", result);

    // XOR
    //   11001000  
    // ^ 10111000 
    //   -------- 
    // = 01110000

    result = binary1 ^ binary2; //expected 112

    printf("result : %i\n", result);

    int binary3 = 0b1010001101001; // 5225

    printf("binary3 : %i\n", binary3);

    binary3 = binary3 >> 1; //2612

    printf("binary3 : %i\n", binary3);

    binary3 = binary3 >> 1; //1306

    printf("binary3 : %i\n", binary3);    

    binary3 = 0b111; // 7

    printf("binary3 : %i\n", binary3);   


    binary3 = binary3 << 1; //111 << 1 = 1110 => 14

    printf("binary3 : %i\n", binary3);

    printf("-------------------------------------\n");
    //BIT CHECK
    // the idea here is you get an integer which you either have set in decimal form or binary
    // and then you want to check whether a specific bit is set
    // Most commonly used when you want to set flags for a certain operation, as in:
    // 0bXXXX
    //   ||||-> do action 1
    //   |||--> do action 2
    //   ||---> do action 3
    //   |----> do action 4

    //We have the example below:
    binary1 = 0b00010001;
    binary2 = 0b00010000;   

    binary3 = binary1 & binary2;

    printf("%i\n",binary3);

    // in the case above we can see both numbers have 1 set in the 4th position
    // therefore the bit operator AND (&) should return '00010000' => 16.
    // if you use this in an IF statement, it will result in a true condition.

    //Now with this case:
    binary1 = 0b00010001;
    binary2 = 0b00001000;   

    binary3 = binary1 & binary2;

    printf("%i\n",binary3);
    // we should have zero as result, since none of the bits set ( to 1) would match
    printf("-------------------------------------\n");

    int num1 = 10, num2 = 3;
    float num3 = num1/num2; //we lose the decimal values
    printf("num3: %f\n",num3);

    num3 = (float)(num1/num2);//no effect
    printf("num3: %f\n",num3);

        num3 = (float)num1/num2;//it works now
    printf("num3: %f\n",num3);

    printf("-------------------------------------\n");

    printf("sizeof(num1) : %lu\n",sizeof(num1));
    printf("sizeof(num3) : %lu\n",sizeof(num3));

    int int_array1[10];

    printf("sizeof(int_array1) with 10 positions : %lu\n",sizeof(int_array1));

    printf("int_array1 count : %lu\n", 
        sizeof(int_array1)/sizeof(int_array1[0])
    );

    printf("-------------------------------------\n");

    //ternary operators

    num3 = num1 == num2 ? 1111 : 2222 ;

    printf("num3: %f\n",num3);

    printf("-------------------------------------\n");

    printf("DEFINE_NUMBER_HEADER: %d\n",DEFINE_NUMBER_HEADER);

    printf("-------------------------------------\n");

    time_t time1;
    time(&time1);

    printf("time1 = %ld\n", time1);


    struct tm * timeinfo;

    timeinfo = localtime ( &time1 );
    printf ( "Current local time and date: %s", asctime (timeinfo) );

    //initialize the random number generator
    srand(time1);

    //get random number
    // num1 = rand();
    for(int i = 0 ; i < 10 ; i++) { printf("rand(): %d\n",rand()); }
    
    printf("-------------------------------------\n");
    //arrays

    int int_arr1[10];
    for(int i = 0 ; i < 10 ; i++) { printf("int_arr1[%d]: %d\n", i , int_arr1[i]); }

    int int_arr2[10] = {}; //initializes all positions with 0
    for(int i = 0 ; i < 10 ; i++) { printf("int_arr2[%d]: %d\n", i , int_arr2[i]); }

    int int_arr3[3][4] = 
    {
        {1,2,3,4},
        {10,20,30,40},
        {100,200,300,400}
    };
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 4 ; j++)
        {
            printf("int_arr3[%d][%d]: %d\n", i, j , int_arr3[i][j]);
        }
    }

    printf("-------------------------------------\n");

    int num4 = 25;
    int num5 = &num4;
    int *ptrNum4 = &num4;

    printf("num4 : %d\n", num4);
    printf("&num4 : %d\n\n\n", &num4);

    printf("num5 : %d\n", num5);
    printf("&num5 : %d\n\n\n", &num5);

    printf("*ptrNum4 : %d\n", *ptrNum4);
    printf("ptrNum4 : %d\n", ptrNum4);
    printf("&ptrNum4 : %d\n", &ptrNum4);


}
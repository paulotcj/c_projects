#include <stdio.h>
#include <stdbool.h>
 
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
    for(int i = 0; i < 43 ; i=i+1)
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

    for(int i = 0; i < 42 || argv[i] != NULL ; i=i+1)
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


    return 0;
}
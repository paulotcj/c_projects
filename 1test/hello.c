#include <stdio.h>
#include <stdbool.h>
 
int main()
{

    printf("Forget Code Retains\n");

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


    return 0;
}
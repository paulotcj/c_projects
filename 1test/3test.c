#include <stdio.h>

void func1(long arr1[])
{
    //printf("sizeof(arr1): %d , sizeof(arr1[0]: %d \n", sizeof(arr1), sizeof(arr1[0]) );
    //printf("sizeof(arr1):\n", sizeof(arr1));

    //it doesnt work -> https://stackoverflow.com/questions/25680014/find-the-size-of-integer-array-received-as-an-argument-to-a-function-in-c
    // " There is no way to determine the length inside the function "
    //suggestion: void getArraySize(int arr[], int len){

}

void copyString(char *to, char *from)
{
    while( *from ) //the null character is equal to 0, therefore FALSE
    {
        *to++ = *from++;
    }

    *to = '\0';
}

int stringLen(char *stringParam)
{
    int length = 0;
    while(*stringParam)
    {
        stringParam++;
        length++;
    }
    return length;
}

int stringLen2(char *stringParam)
{
    const char *firstChar = stringParam;
    while(*stringParam)
    {
        stringParam++;
    }

    return stringParam - firstChar;
}

int main(int argc, char *argv[])
{
    printf("hello\n");

    long longValue1 = 9999L;
    long longValue2 = 10000L;

    //this is telling that whatever 'long' value this pointer points to, the long value is constant
    // the pointer itself can change and point to a different memory location, but the value it references
    // is always constant (if accessing through the pointer)
    const long *ptrLong1 = &longValue1; 

    printf("*ptrLong1 : %d\n",*ptrLong1);

    //*ptrLong1 = 222L; //error
    //*ptrLong1 = *ptrLong1 + 1; //error
    //*ptrLong1++; //no error ?????

    

    printf("*ptrLong1 : %d\n",*ptrLong1);

    ptrLong1 = &longValue2; //ok?
    printf("*ptrLong1 : %d\n",*ptrLong1);

    //*ptrLong1 = 222L; //error
    //*ptrLong1 = *ptrLong1 + 1; //error
    *ptrLong1--; //no error ?????

    printf("*ptrLong1 : %d\n",*ptrLong1);


    printf("-------------------------------------\n");

    int intNum1 = 43;
    int intNum2 = 44;
    int *const ptrInt1 = &intNum1;

    printf("*ptrInt1 : %d\n",*ptrInt1);

    *ptrInt1 = 50;

    printf("*ptrInt1 : %d\n",*ptrInt1);

    //ptrInt1 = &intNum2; //error: assignment of read-only variable ‘ptrInt1’
    printf("*ptrInt1 : %d\n",*ptrInt1);

    const int *const ptrInt2 = &intNum1;

    printf("*ptrInt2 : %d\n",*ptrInt2);

    //ptrInt2 = &intNum2; //error: assignment of read-only variable ‘ptrInt2’

    //*ptrInt2 = 11; //error: assignment of read-only location ‘*ptrInt2’


    printf("*ptrInt2 : %d\n",*ptrInt2);


    //summary:
    // const int * -> value cannot be changed
    // int *const -> pointer cannot be changed
    // const int *const -> value and pointer cannot be changed

    printf("-------------------------------------\n");

    // void* can contain the address of any datatype

    char char1 = 'a';


    void* ptrAny1;
    ptrAny1 = &char1;

    printf("*prtAny1 : %c\n", *(char*)ptrAny1);

    ptrAny1 = &intNum1;

    printf("*prtAny1 : %d\n", *(int*)ptrAny1);

    printf("-------------------------------------\n");

    int intArr1[] = {1,2,3,4,5,6,7,8,9,10};

    ptrAny1 = &intArr1;
    printf("*prtAny1 : %d\n", *(int*)ptrAny1);

    ptrAny1 = &intArr1[2];
    printf("*prtAny1 : %d\n", *(int*)ptrAny1);

    ptrAny1 = intArr1+2;
    printf("*prtAny1 : %d\n", *(int*)ptrAny1);

    ptrAny1 = intArr1+3;
    printf("*prtAny1 : %d\n", *(int*)ptrAny1);   

    int *ptrArr1;
    int *const intArrEnd = intArr1 + 10; 
    
    for(ptrArr1 = intArr1; ptrArr1 < intArrEnd; ++ptrArr1   )
    {
        printf("ptr: %d \n",*ptrArr1);
    }

    long longArr1[] = {15L, 25L, 35L, 45L};
    long *longPtr1 = longArr1;

    printf("sizeof(longArr1): %d , sizeof(longArr1[0]: %d \n", sizeof(longArr1), sizeof(longArr1[0]) );

    func1(longArr1);

    char string1[] = "A string to be copied.";
    char string2[50];

    copyString(string2, string1);
    printf("string2: %s", string2);

    printf("stringLen(string1) : %d \n",stringLen(string1) );
    printf("stringLen2(string1) : %d \n",stringLen2(string1) );

    

    return 0;
}
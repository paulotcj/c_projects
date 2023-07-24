#include <stdio.h>
#include "array.h"

int main(void) {
    printf("hello\n");

    int* arr1 = NULL;
    int capacity, occupied = 0;

    printf("sizeof(*(array)): %lu\n",sizeof(*(arr1)));
    capacity = array_capacity(arr1);
    occupied = array_occupied(arr1);
    printf("Capacity: %d, Occupied: %d\n", capacity, occupied);
    
    printf("--------------------------------\n");

    int arr1_len = 0;

    array_push(arr1, 2);
    arr1_len = array_length(arr1);

    printf("arr1[0]: %d\n", arr1[0]);
    printf("arr1_len: %d\n", arr1_len);
    printf("sizeof(*(array)): %lu\n",sizeof(*(arr1)));
    capacity = array_capacity(arr1);
    occupied = array_occupied(arr1);
    printf("Capacity: %d, Occupied: %d\n", capacity, occupied);    

    printf("--------------------------------\n");

    array_push(arr1, 3);
    array_push(arr1, 5);
    array_push(arr1, 7);
    array_push(arr1, 11);
    array_push(arr1, 13);
    array_push(arr1, 17);
    array_push(arr1, 19);
    array_push(arr1, 23);
    arr1_len = array_length(arr1);

    printf("arr1[3]: %d\n", arr1[5]);
    printf("arr1_len: %d\n", arr1_len); 
    printf("sizeof(*(array)): %lu\n",sizeof(*(arr1))); 
    capacity = array_capacity(arr1);
    occupied = array_occupied(arr1);
    printf("Capacity: %d, Occupied: %d\n", capacity, occupied);

    printf("--------------------------------\n");
    int len = *(arr1 - 1); // array len
    int cap = *(arr1 - 2); // array capacity
    printf("len: %d\n", len);
    printf("capacity: %d\n", cap);

    printf("--------------------------------\n");

    printf("Hacking the dynamic array structure\n");
    *(arr1 - 2) = -200;
    capacity = array_capacity(arr1);
    occupied = array_occupied(arr1);
    printf("Capacity: %d, Occupied: %d\n", capacity, occupied);    

    array_free(arr1);


}
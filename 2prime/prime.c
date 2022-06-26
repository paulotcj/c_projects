#include <stdio.h>
#define SIZE_ARRAY_PRIMES 100000 //100,000


int IsPrime(int primes[], int primeCount, int number)
{
    for(int i  = 0 ; i < primeCount ; i++)
    {
        if( (number % primes[i]) == 0 ){ return 0;}
    }

    return 1;
}

int main(int argc, char *argv[])
{
    int primes[SIZE_ARRAY_PRIMES];
    primes[0] = 2;
    int primeCount = 1;

    for(int i = 3; primeCount < SIZE_ARRAY_PRIMES; i+=2)//fill the array of primes with the 100 first primes
    {

        if( IsPrime(primes, primeCount, i ) == 1)
        {
            primes[primeCount++] = i;
        }
    }

    for(int i = 0 ; i < SIZE_ARRAY_PRIMES ; i++)
    {
        printf("primes[%d] : %d\n",i,primes[i]);
    }

}


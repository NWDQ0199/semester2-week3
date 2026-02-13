
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;
    short int testShortInt;
    long int testLongInt;
    long long int testLongLongInt;
    double testDouble;
    long double testLongDouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));
    printf("Short int size is %ld bytes\n",sizeof(testShortInt));
    printf("Long int size is %ld bytes\n",sizeof(testLongInt));
    printf("Long long int size is %ld bytes\n",sizeof(testLongLongInt)); //same as long
    printf("Double size is %ld bytes\n",sizeof(testDouble));
    printf("Long double size is %ld bytes\n",sizeof(testLongDouble)); //actually length of 2 doubles
    return 0;
}

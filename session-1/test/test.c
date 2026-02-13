#include "tnal.c"
#include <stdio.h>
#include <stdlib.h>

int InsertChar(char** str, int strLen, char chr, int index);

int main(void)
{
    printf("a() returns %i\n",a());

    char* str="hello";
    InsertChar(&str, 5, '!', 5);
    printf("str: %s\n",str);
    free(str);
    return 0;
}

int InsertChar(char** str, int strLen, char chr, int index)
{
    if(index>strLen)
    {
        //fails when index is outside the range of values 0 to strLen
        //this is 0 to strLen and not 0 to strLen-1 because you can also place
        //chr after the final character in str
        *str=malloc(0); //so str can be freed after insertchar fails
        return 1;
    }
    char* str2=malloc(sizeof(char)*(strLen+2)); //strLen plus chr and null
    char* strOrig=*str;
    //printf("str[%i]=%c\n",strLen,*str[strLen]);
    for(int i=0;i<index;i++)
    {
        str2[i]=strOrig[i];
    }
    str2[index]=chr;
    for(int i=index+1;i<strLen+1;i++)
    {
        str2[i]=strOrig[i-1];
    }
    str2[strLen+2]='\0';
    //free(str);
    *str=str2;
    return 0;
}
#include "tnal.c"
#include <stdio.h>
#include <stdlib.h>

int InsertChar(char** str, int strLen, char chr, int index);

int main(void)
{
    printf("a() returns %i\n",a());

    char* str="hello";
    InsertChar(&str, 5, '!', 5);
    printf("str: %s",str);
    free(str);
    return 0;
}

int InsertChar(char** str, int strLen, char chr, int index)
{
    char* str2=malloc(sizeof(char)*(strLen+1));
    for(int i=0;i<index;i++)
    {
        str2[i]=(*str)[i];
    }
    str2[index]=chr;
    for(int i=index+1;i<strLen;i++)
    {
        str2[i]=(*str)[i-1];
    }
    free((*str));
    str=&str2;
}
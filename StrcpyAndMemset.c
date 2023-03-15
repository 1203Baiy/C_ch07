#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[] = {0};
    char arr2[] = {"hello world!"};
    strcpy(arr1,arr2);
    memset(arr2,'y',5);
    printf("%s\n",arr1);
    printf("%s",arr2);
    return 0;
}

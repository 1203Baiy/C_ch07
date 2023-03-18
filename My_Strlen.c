#include<stdio.h>
//不创建临时变量来实现计算出字符长度
int My_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1 + My_strlen(str + 1);
    }
    return 0;
}
int main()
{
    char arr[] = {0};
    scanf("%s",arr);
    int ret = My_strlen(arr);
    printf("%d",ret);
}
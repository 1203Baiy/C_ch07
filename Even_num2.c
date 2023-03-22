#include<stdio.h>
int main()
{
    
    int num = 0;
    for(int i = 0; i <= 1000; i += 2)
    {
        num += i;
    }
    printf("%d",num);
    return 0;
}
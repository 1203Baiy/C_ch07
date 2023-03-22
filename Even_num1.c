#include<stdio.h>
int Even (int n)
{
    if(n<=1000)
    {
        return n += Even(n+2);
    }
    return -1;
}
int main()
{
    int a = Even(0);
    printf("%d\n",a);
    return 0;
}
#include<stdio.h>
void Swap(int* pa,int* pb)//赋址传递:通过指针变量解引用后，来改变函数外部变量。
{
    int z = 0;
    z = *pa;
    *pa = *pb;
    *pb = z;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("交换前：%d\t%d\n",a,b);
    Swap(&a,&b);
    printf("交换后：%d\t%d",a,b);
    return 0;
}
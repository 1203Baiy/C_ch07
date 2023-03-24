//求证正奇数一定会有一个平方差公式。
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 3;
    int k = 0;
    scanf("%d",&k);
    while(n<=k)
    {
        int sum = n/2;
        if(n == pow((sum + 1),2)-pow((sum),2))
        {
            printf("%-3d=%d^2 - %d^2\n",n,(sum+1),sum);
        }
        else
        {
            printf("此数不是智慧数：%d",n);
        }
        n+=2;
    }
    return 0;
}
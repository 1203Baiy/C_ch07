#include<stdio.h>
int is_leap_year(int x){
    return (x%4 == 0 && x%100 != 0 || x%400 == 0);
       
}
int main()
{   
    int count = 0;
    for(int i = 1000;i <= 2000;i++){
        if(is_leap_year(i) == 1){
            count++;
            printf(" %d",i);
            if(count%27==0){
                printf("\n");
            }
        }
    }
    printf("\n%d",count);
    return 0;
}
#include <stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the number");
    scanf("%d",&num);
while(num!=0)
{
    int temp=num%10;
    sum=sum+temp;
    num=num/10;
}
printf("sum of digits is %d",sum);
    return 0;
}
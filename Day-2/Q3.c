#include <stdio.h>
int main()
{
    int num,pro=1;
    printf("enter the number");
    scanf("%d",&num);
while(num!=0)
{
    int temp=num%10;
    pro=pro*temp;
    num=num/10;
}
printf("product of digits is %d",pro);
    return 0;
}
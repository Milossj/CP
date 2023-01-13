#include<stdio.h>

int main()
{
int a;
int sum=0;
printf("Please enter value:  \n");
scanf ("%d  \n", &a);

while (a!=0)
{
sum=sum+a;
printf("sum: %d \n", sum);
printf("num: \n");
scanf("%d", &a);
}
return 0;
}

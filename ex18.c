#include<stdio.h>


int main()
{
int i=0;
int veca[5]={1,2,3,4,5};
int vecb[5]={1,1,1,1,1};
int vecc[5];

for(i=0;i<5;i++)
{
vecc[i]=veca[i]+vecb[i];
}

for(i=0;i<5;i++)
{
printf("New array is: vecc[%i] \n", vecc[i]);
}



return 0;
}



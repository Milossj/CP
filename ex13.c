#include<stdio.h>
//statements
//#include<bool.h>
int main(){

int n1, n2;
printf("n1 i n2: \n");
scanf("%d %d", &n1, &n2);

switch(n1<n2)
{
case 1:
	printf("n1 is smaller than n2 \n");
	break;
case 0:
	printf("n2 is smaller than n1\n");
	break;
default:
	printf("none\n");
	break;
}



return 0;
}


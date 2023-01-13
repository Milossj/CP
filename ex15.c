#include<stdio.h>

int main(){
int month;
int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12;
printf("what month\n");
scanf("%d", &month);

switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:

	printf("31\n");
	break;
case 2:
	printf("28\n");
	break;
case 4:
case 6:
case 9:
case 11:
	printf("30\n");
	break;
}



return 0;
}

#include<stdio.h>

int main(){
double n1,n2;
double sum=n1+n2;
double ded=n1-n2;
double mult=n1*n2;
double div=n1/n2;
char operation;
printf("n1 and n2 and op: \n");
scanf("%lf %lf %c\n", &n1,&n2, &operation);

switch(operation){

case '+':
	printf("%lf\n", sum);
	break;
case '-':
	printf("%lf\n", ded);
	break;
case '*':
	printf("%lf\n", mult);
	break;
case '/':
	printf("%lf\n", div);
	break;
default:
	printf("not good\n");
}

return 0;
}

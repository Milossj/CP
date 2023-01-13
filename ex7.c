#include <stdio.h>

void main (){

int Var1 = 1;
char Var2 = 'n';
float Var3 = 1.26;
double Var4 = 79;

printf("%i\n", Var1);
printf("%c\n", Var2);
printf("%f\n", Var3);
printf("%f\n", Var4);

printf("%f\n",(float) Var1);
printf("%i\n",(int) Var2);
printf("%f\n",(float) Var3);
printf("%c\n",(char) Var4);

printf("sum %i\n",Var1+Var2);
printf("sumnew %f\n", Var3+Var4);
}

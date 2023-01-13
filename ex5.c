#include <stdio.h>


int c=12;


int f1(){
int a=1, b=3;

return a+b;
}

int f2(){

int c=2, d=3;

return c+d;
}

void  main(){

printf("%i\n", c);

printf("%i\n", f1());
printf("%i\n", f2());

}

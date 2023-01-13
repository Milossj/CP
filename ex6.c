#include<stdio.h>

#include<stdlib.h>

int main(){

printf("%s\n", getenv("USER"));
putenv("USER=MARINA");
printf("%s\n", getenv("USER"));


return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

char s0[4]="abc0";
char s1[]="abc1";

//char * s2[]="abc";

char * s3=malloc(sizeof(char)*5);
strcpy(s3, "abc3");
char * s4=calloc(5, sizeof(char));
strcpy(s4, "abc4");

printf("%s \n", s0);
printf("%s \n", s1);
//printf("%s \n", s2);
printf("%s \n", s3);
printf("%s \n", s4);

printf("len %lu \n", strlen(s1));
printf("comparison s0, s1: %i", strcmp(s0,s1));

char new[10];
strcpy (new, s3);
printf("%s\n", new);

strcat(new,s3);
printf("$s\n", new);

scanf("%s \n", new);
printf("%s \n", new);

fgets(new, 10, stdin);
printf("%s \n", new);

return 0;
}

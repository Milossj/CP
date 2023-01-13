#include <stdio.h>

int main() {

char a[5]="hello";
int b=23;
char c='d';
float d=1.25;

printf("a: %s\n b: %i\n c: %c\n d: %.2f\n", a,b,c,d);
printf("size a: %lu\n size b: %lu\n size c: %lu\n size d: %lu\n", sizeof(a),sizeof(b),sizeof(c),sizeof(d));

return 0;

}

#include <stdio.h>

int main(){

float time;
float lenght;
printf("enter time in hours:\n");
scanf("%f", &time);

printf("enter lenght in kilometers:\n");
scanf("%f", &lenght);

float speed=lenght/time;


printf("speed is: %f km/h\n", speed);


return 0;

}

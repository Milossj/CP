#include<stdio.h>

float toKmh(float b){
	b = b*3.6;
return b;
}

float toMps(float b){
	 b =  b/3.6;
return b;
}

int main(){

	int a;
	float b:

	printf("Select conversion direction, 1 is from Kmh to Mps 2 is from Mps to Kmh: \n");
	scanf("%i", &a);

	printf("Now enter your speed, we support floats: \n" );
	scanf("%f \n", &b );

	if(a==1){
		printf("Mps: %f \n", toMps);

	}
	else{
		printf("Kmh: %f \n", toKmh);
	}

return 0;
}

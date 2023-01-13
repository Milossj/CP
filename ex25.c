#include<stdio.h>

int main(){

 int input;


  printf("Enter a value between 1 and 10: ");
  scanf("%d", &input);  //sdusmndsdijp123*sddsdp(){}

  if (input >= 1 && input <= 10) {

    printf("Multiplication table for %d:\n", input);
    for (int i = 1; i <= 10; i++) {
      printf("%d * %d = %d\n", input, i, input * i);
    }
  } else {
    printf("Error:  Please enter a value between 1 and 10.\n");
  }

return 0;
}

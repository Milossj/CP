#include <stdio.h>

int main(void) {
  int input;

 printf("Enter a one-digit integer (999 to exit): ");
  scanf("%d", &input);

  while (input != 999) {

    for (int i = 1; i <= 3; i++) {
      printf("%d", input);
    }
    printf("\n");

    printf("Enter a one-digit integer (999 to exit): ");
    scanf("%d", &input);
  }

  return 0;
}


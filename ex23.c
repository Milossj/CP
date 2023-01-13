#include<stdio.h>
#include<string.h>

int main(){
char in[100];  
  printf("Enter a string: ");
  fgets(in, 100, stdin);  

  //  reversesdddsdssd
  for (int i = strlen(in) - 1; i >= 0; i--) {
    printf("%c", in[i]);
  }



return 0;
}

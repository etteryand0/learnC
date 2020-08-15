#include <stdio.h>
#include <stdlib.h>
int main() 
{
  // hello world
  printf("Hello World!\nYes\n");

  // let variables and print them
  int digit = 32; // "%d" stands for "digit"
  float float_num = 32.52; // "%f" stands for "float"
  double float_big = 23232.32423421; // "%lf" stands for "large float"
  long int long_digit = 2147483647; // "%ld" stands for "large digit"
  

  printf("Digit is %d\n", digit);
  printf("Float is %f\n", float_num);
  printf("Digits are the same %d=%d\n", digit, digit);

  return 0;
}

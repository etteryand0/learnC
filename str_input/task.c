#include <stdio.h>

int main ()
{
  char c[100];
  scanf("%[^\n]%*c", &c[0]);

  puts("Helo, World!");
  puts(c);
}

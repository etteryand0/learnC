#include <stdio.h>
#define MAX_LEN 100

int main ()
{
  char ch, str[MAX_LEN], sen[MAX_LEN];
  
  scanf("%c", &ch);
  printf("%c\n", ch);

  scanf("%s", str);
  printf("%s\n", str);
  scanf("\n");

  scanf("%[^\n]%*c", sen);
  printf("%s", sen);

  return 0;
}
